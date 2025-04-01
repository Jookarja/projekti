#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "pindll.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    connect(ui->CheckPinButton, &QPushButton::clicked, this, &MainWindow::onCheckPinClicked);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::onCheckPinClicked()
{
    QString cardNumber = ui->CardNumber->text();
    QString pin = ui->PinNumber->text();

    bool isValid = verifyPIN(cardNumber, pin);

    if (isValid) {
        ui->AttNum->setText("PIN is valid!");
        ui->AttNum->setStyleSheet("color: green;");
    } else {
        ui->AttNum->setText("PIN is invalid!");
        ui->AttNum->setStyleSheet("color: red;");
    }

    qDebug() << "Painiketta painettu";
}
