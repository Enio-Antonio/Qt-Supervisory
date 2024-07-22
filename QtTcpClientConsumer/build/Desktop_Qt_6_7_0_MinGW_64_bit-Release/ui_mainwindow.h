/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "plotter.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_ip_servidor;
    QLineEdit *input_ip;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton_connect;
    QPushButton *pushButton_disconnect;
    QListWidget *lista_ip;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_update;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_timing;
    QSlider *horizontalSlider_timing;
    QLCDNumber *lcdNumber_timing;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_start;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_stop;
    Plotter *widget;
    QLabel *label_lendo_dados;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(690, 525);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 10, 260, 430));
        verticalLayout_4 = new QVBoxLayout(layoutWidget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        label_ip_servidor = new QLabel(layoutWidget);
        label_ip_servidor->setObjectName("label_ip_servidor");

        verticalLayout_2->addWidget(label_ip_servidor);

        input_ip = new QLineEdit(layoutWidget);
        input_ip->setObjectName("input_ip");
        input_ip->setMaxLength(32770);

        verticalLayout_2->addWidget(input_ip);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        pushButton_connect = new QPushButton(layoutWidget);
        pushButton_connect->setObjectName("pushButton_connect");

        horizontalLayout_2->addWidget(pushButton_connect);

        pushButton_disconnect = new QPushButton(layoutWidget);
        pushButton_disconnect->setObjectName("pushButton_disconnect");

        horizontalLayout_2->addWidget(pushButton_disconnect);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_4->addLayout(verticalLayout_2);

        lista_ip = new QListWidget(layoutWidget);
        lista_ip->setObjectName("lista_ip");

        verticalLayout_4->addWidget(lista_ip);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        pushButton_update = new QPushButton(layoutWidget);
        pushButton_update->setObjectName("pushButton_update");

        horizontalLayout_3->addWidget(pushButton_update);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        label_timing = new QLabel(layoutWidget);
        label_timing->setObjectName("label_timing");

        verticalLayout->addWidget(label_timing);

        horizontalSlider_timing = new QSlider(layoutWidget);
        horizontalSlider_timing->setObjectName("horizontalSlider_timing");
        horizontalSlider_timing->setMinimum(1);
        horizontalSlider_timing->setMaximum(1000);
        horizontalSlider_timing->setSliderPosition(1000);
        horizontalSlider_timing->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(horizontalSlider_timing);


        horizontalLayout->addLayout(verticalLayout);

        lcdNumber_timing = new QLCDNumber(layoutWidget);
        lcdNumber_timing->setObjectName("lcdNumber_timing");
        lcdNumber_timing->setProperty("intValue", QVariant(1000));

        horizontalLayout->addWidget(lcdNumber_timing);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        pushButton_start = new QPushButton(layoutWidget);
        pushButton_start->setObjectName("pushButton_start");

        horizontalLayout_4->addWidget(pushButton_start);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        pushButton_stop = new QPushButton(layoutWidget);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout_4->addWidget(pushButton_stop);


        verticalLayout_4->addLayout(horizontalLayout_4);

        widget = new Plotter(centralWidget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(280, 80, 401, 361));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        label_lendo_dados = new QLabel(centralWidget);
        label_lendo_dados->setObjectName("label_lendo_dados");
        label_lendo_dados->setGeometry(QRect(280, 50, 391, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 690, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_timing, SIGNAL(valueChanged(int)), lcdNumber_timing, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label_ip_servidor->setText(QCoreApplication::translate("MainWindow", "IP do Servidor", nullptr));
        pushButton_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        pushButton_disconnect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        pushButton_update->setText(QCoreApplication::translate("MainWindow", "Update", nullptr));
        label_timing->setText(QCoreApplication::translate("MainWindow", "Timing (ms)", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_lendo_dados->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
