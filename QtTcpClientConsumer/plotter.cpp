#include "plotter.h"
#include <QPainter>
#include <QPen>
#include <QBrush>
#include <QDebug>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{
    /*
    x0 = 4;
    y0 = 326;
    x1 = (14);
    //y1 = (rand() % 331);
*/
    dados.push_back("0");
}

Plotter::~Plotter()
{

}

void Plotter::paintEvent(QPaintEvent *event)
{
    Q_UNUSED(event);
    QPainter painter(this);
    QBrush brush;
    QPen pen;

    painter.setRenderHint(QPainter::Antialiasing);

    // Parte do widget
    brush.setColor(Qt::white);
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(QColor(128, 128, 128));
    pen.setWidth(7);
    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0, 0, width(), height());

    // Parte do gráfico
    pen.setColor(QColor(0, 0, 255));
    pen.setWidth(2);
    painter.setPen(pen);

    x0 = 4;
    int y0_inteiro = dados[0].toInt();
    y0 = y0_inteiro;
    x1 = 14;

    if (dados.size() > 1)
        {
        for (size_t i = 0; i < dados.size(); i++)
        {
            y1 = dados[i].toInt();

            painter.drawLine(x0, y0, x1, y1);

            y0 = y1;
            x0 = x1;
            x1 += 10;
        }
    }

/*
    x0 = 4;
    y0 = 326;
    x1 = (14);

    if (dados_aux.size() >= 10)
    {
        for (size_t i = 0; i < dados_aux.size(); i++)
        {
            y1 = dados_aux[i].toInt();

            painter.drawLine(x0, y0, x1, y1);

            y0 = y1;
            x0 = x1;
            x1 += 10;
        }
    }
*/
}

void Plotter::receberDados(qint64 thetime, QString str)
{
    tempo = thetime;
    valor = str;

    tempos.push_back(thetime);
    dados.push_back(valor);
/*
    if (dados.size() % 10 == 0)
    {
        dados_aux = dados;
        dados.clear();
    }
*/

    qDebug() << "Esse e o tempo 'thetime': " << tempo;
    qDebug() << "Esse e o valor: 'str'" << valor;

    //int num = (rand() % 331);

    if (x1 > width())
    {
        dados.erase(dados.begin());
        //dados.clear();
        x0 -= 10;
        y0 -= 10;
    }

    repaint();
}
