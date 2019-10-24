#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(pressed()), this, SLOT(klickat()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::klickat()
{
    ui->lineEdit->setText("Du klickade!");
}
