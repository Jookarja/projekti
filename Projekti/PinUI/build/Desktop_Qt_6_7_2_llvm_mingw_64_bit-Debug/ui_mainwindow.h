/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QFormLayout *formLayout;
    QPushButton *Card;
    QLineEdit *CardNumber;
    QPushButton *PIN;
    QLineEdit *PinNumber;
    QLabel *Attempts;
    QLineEdit *AttNum;
    QPushButton *CheckPinButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(853, 536);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);

        verticalLayout->addWidget(label);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        Card = new QPushButton(centralwidget);
        Card->setObjectName("Card");

        formLayout->setWidget(0, QFormLayout::LabelRole, Card);

        CardNumber = new QLineEdit(centralwidget);
        CardNumber->setObjectName("CardNumber");

        formLayout->setWidget(0, QFormLayout::FieldRole, CardNumber);

        PIN = new QPushButton(centralwidget);
        PIN->setObjectName("PIN");

        formLayout->setWidget(1, QFormLayout::LabelRole, PIN);

        PinNumber = new QLineEdit(centralwidget);
        PinNumber->setObjectName("PinNumber");

        formLayout->setWidget(1, QFormLayout::FieldRole, PinNumber);

        Attempts = new QLabel(centralwidget);
        Attempts->setObjectName("Attempts");
        Attempts->setFrameShape(QFrame::Shape::Box);

        formLayout->setWidget(2, QFormLayout::LabelRole, Attempts);

        AttNum = new QLineEdit(centralwidget);
        AttNum->setObjectName("AttNum");

        formLayout->setWidget(2, QFormLayout::FieldRole, AttNum);

        CheckPinButton = new QPushButton(centralwidget);
        CheckPinButton->setObjectName("CheckPinButton");
        QFont font1;
        font1.setPointSize(16);
        CheckPinButton->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, CheckPinButton);


        verticalLayout->addLayout(formLayout);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "INSERT CARD", nullptr));
        Card->setText(QCoreApplication::translate("MainWindow", "Card Number", nullptr));
        PIN->setText(QCoreApplication::translate("MainWindow", "PIN Number", nullptr));
        Attempts->setText(QCoreApplication::translate("MainWindow", "Attempts", nullptr));
        CheckPinButton->setText(QCoreApplication::translate("MainWindow", "LOGIN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
