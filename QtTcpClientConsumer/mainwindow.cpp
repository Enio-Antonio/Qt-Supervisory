#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  socket = new QTcpSocket(this);
  //tcpConnect();

  connect(ui->pushButtonGet,
          SIGNAL(clicked(bool)),
          this,
          SLOT(getData()));

  // Preencher o vetor e enviar informações para o gráfico
  connect(ui->pushButton_debug, SIGNAL(clicked(bool)), ui->widget, SLOT(preencherVetor()));

  // Enviar thetime e str para a classe Plotter
  connect(this, SIGNAL(enviarDados(qint64, QString)), ui->widget, SLOT(receberDados(qint64, QString)));
}

void MainWindow::tcpConnect(){
  int porta = 1234;
  socket->connectToHost(ip_servidor, porta); // 127.0.0.1
  if(socket->waitForConnected(3000)){
    qDebug() << "Connected";
  }
  else{
    qDebug() << "Disconnected";
  }
}

void MainWindow::getData(){
  QString str;
  QStringList list;
  qint64 thetime;
  qDebug() << "to get data...";
  if(socket->state() == QAbstractSocket::ConnectedState){
    if(socket->isOpen()){
      qDebug() << "reading...";
      socket->write("get 127.0.0.1 1\r\n");
      socket->waitForBytesWritten();
      socket->waitForReadyRead();
      qDebug() << socket->bytesAvailable();
      while(socket->bytesAvailable()){
        str = socket->readLine().replace("\n","").replace("\r","");
        list = str.split(" ");
        if(list.size() == 2){
          bool ok;
          str = list.at(0);
          thetime = str.toLongLong(&ok);
          str = list.at(1);
          qDebug() << thetime << ": " << str;
          // Emite os dados para o Widget Plotter
          emit enviarDados(thetime, str);
        }
      }
    }
  }
}


MainWindow::~MainWindow()
{
  delete socket;
  delete ui;
}

void MainWindow::on_input_ip_editingFinished()
{
    ip_servidor = ui->input_ip->text();
}


void MainWindow::on_pushButton_connect_clicked()
{
    tcpConnect();
    // ui->lista_ip->addItem(ip_servidor);
    qDebug() << "ip servidor: " << ip_servidor;
}


void MainWindow::on_pushButton_disconnect_clicked()
{
    socket->disconnectFromHost();
}


// Gerenciamento dos items da lista de servidores
void MainWindow::on_lista_ip_itemClicked(QListWidgetItem *item)
{
    Q_UNUSED(item);
    ui->input_ip->setText(ui->lista_ip->currentItem()->text());

    ip_servidor = ui->lista_ip->currentItem()->text();

    qDebug() << ui->lista_ip->currentItem()->text();
}


// Botão Update
void MainWindow::on_pushButton_update_clicked()
{
    if(socket->state() == QAbstractSocket::ConnectedState)
    {
        if(socket->isOpen())
        {
            socket->write("list");
            socket->waitForBytesWritten();
            socket->waitForReadyRead();
            qDebug() << socket->bytesAvailable();
            while(socket->bytesAvailable())
            {
                QString ip = socket->readLine().replace("\n","").replace("\r","");
                qDebug() << "ip advindo do comando list: " << ip;
                ui->lista_ip->addItem(ip);
            }
        }
    }

    /*
    for (QString & servidor : servidores)
    {
        int controle = 0;
        for (int i = 0; i < ui->lista_ip->count(); i++)
        {
            if (servidor == ui->lista_ip->item(i)->text())
                controle++;
        }

        if (controle == 0)
            ui->lista_ip->addItem(servidor);
    }
    */
}


void MainWindow::on_pushButton_start_clicked()
{
    get_data_timer = startTimer(1000);
}

void MainWindow::timerEvent(QTimerEvent *event)
{
    Q_UNUSED(event);
    getData();
}

void MainWindow::on_pushButton_stop_clicked()
{
    killTimer(get_data_timer);
}

