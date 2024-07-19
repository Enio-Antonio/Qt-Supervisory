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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_8;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_7;
    QLineEdit *input_ip;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *botao_connect;
    QPushButton *botao_disconect;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QSlider *horizontalSlider_min;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_min;
    QLCDNumber *lcdNumber_min;
    QHBoxLayout *horizontalLayout_4;
    QSlider *horizontalSlider_max;
    QVBoxLayout *verticalLayout_2;
    QLabel *max;
    QLCDNumber *lcdNumber_max;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label;
    QSlider *horizontalSlider_timer;
    QLCDNumber *lcdNumber;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_start;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_stop;
    QLabel *label_status;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(773, 440);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(11, 1, 751, 441));
        horizontalLayout_8 = new QHBoxLayout(layoutWidget);
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        horizontalLayout_8->setContentsMargins(0, 0, 0, 0);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        input_ip = new QLineEdit(layoutWidget);
        input_ip->setObjectName("input_ip");
        input_ip->setMaxLength(32769);
        input_ip->setFrame(true);

        horizontalLayout_7->addWidget(input_ip);


        verticalLayout_4->addLayout(horizontalLayout_7);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        botao_connect = new QPushButton(layoutWidget);
        botao_connect->setObjectName("botao_connect");

        horizontalLayout->addWidget(botao_connect);

        botao_disconect = new QPushButton(layoutWidget);
        botao_disconect->setObjectName("botao_disconect");

        horizontalLayout->addWidget(botao_disconect);


        verticalLayout->addLayout(horizontalLayout);


        verticalLayout_4->addLayout(verticalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSlider_min = new QSlider(layoutWidget);
        horizontalSlider_min->setObjectName("horizontalSlider_min");
        horizontalSlider_min->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider_min);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName("verticalLayout_3");
        label_min = new QLabel(layoutWidget);
        label_min->setObjectName("label_min");

        verticalLayout_3->addWidget(label_min);

        lcdNumber_min = new QLCDNumber(layoutWidget);
        lcdNumber_min->setObjectName("lcdNumber_min");

        verticalLayout_3->addWidget(lcdNumber_min);


        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        horizontalSlider_max = new QSlider(layoutWidget);
        horizontalSlider_max->setObjectName("horizontalSlider_max");
        horizontalSlider_max->setMaximum(99);
        horizontalSlider_max->setValue(35);
        horizontalSlider_max->setOrientation(Qt::Horizontal);

        horizontalLayout_4->addWidget(horizontalSlider_max);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName("verticalLayout_2");
        max = new QLabel(layoutWidget);
        max->setObjectName("max");

        verticalLayout_2->addWidget(max);

        lcdNumber_max = new QLCDNumber(layoutWidget);
        lcdNumber_max->setObjectName("lcdNumber_max");
        lcdNumber_max->setProperty("value", QVariant(35.000000000000000));

        verticalLayout_2->addWidget(lcdNumber_max);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        label = new QLabel(layoutWidget);
        label->setObjectName("label");

        horizontalLayout_6->addWidget(label);

        horizontalSlider_timer = new QSlider(layoutWidget);
        horizontalSlider_timer->setObjectName("horizontalSlider_timer");
        horizontalSlider_timer->setMinimum(1);
        horizontalSlider_timer->setMaximum(1000);
        horizontalSlider_timer->setSliderPosition(1000);
        horizontalSlider_timer->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(horizontalSlider_timer);

        lcdNumber = new QLCDNumber(layoutWidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setProperty("value", QVariant(1000.000000000000000));
        lcdNumber->setProperty("intValue", QVariant(1000));

        horizontalLayout_6->addWidget(lcdNumber);


        verticalLayout_4->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        pushButton_start = new QPushButton(layoutWidget);
        pushButton_start->setObjectName("pushButton_start");

        horizontalLayout_5->addWidget(pushButton_start);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        pushButton_stop = new QPushButton(layoutWidget);
        pushButton_stop->setObjectName("pushButton_stop");

        horizontalLayout_5->addWidget(pushButton_stop);


        verticalLayout_4->addLayout(horizontalLayout_5);

        label_status = new QLabel(layoutWidget);
        label_status->setObjectName("label_status");

        verticalLayout_4->addWidget(label_status);


        horizontalLayout_8->addLayout(verticalLayout_4);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName("textEdit");

        horizontalLayout_8->addWidget(textEdit);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 773, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(horizontalSlider_min, SIGNAL(valueChanged(int)), lcdNumber_min, SLOT(display(int)));
        QObject::connect(horizontalSlider_max, SIGNAL(valueChanged(int)), lcdNumber_max, SLOT(display(int)));
        QObject::connect(horizontalSlider_timer, SIGNAL(valueChanged(int)), lcdNumber, SLOT(display(int)));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        botao_connect->setText(QCoreApplication::translate("MainWindow", "Connect", nullptr));
        botao_disconect->setText(QCoreApplication::translate("MainWindow", "Disconnect", nullptr));
        label_min->setText(QCoreApplication::translate("MainWindow", "Min", nullptr));
        max->setText(QCoreApplication::translate("MainWindow", "Max", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Timing (ms) ", nullptr));
        pushButton_start->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        pushButton_stop->setText(QCoreApplication::translate("MainWindow", "Stop", nullptr));
        label_status->setText(QCoreApplication::translate("MainWindow", "disconnected", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
