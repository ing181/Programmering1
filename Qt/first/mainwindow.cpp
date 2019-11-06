#include "mainwindow.h"
#include "ui_mainwindow.h"

// Körs när programmet startar
MainWindow::MainWindow(QWidget *parent) // *parent innehåller adressen till
    : QMainWindow(parent)
    , ui(new Ui::MainWindow) // Här skapas ett objekt, "Något som finns i verklighten" av klassen MainWindow, som hör till namespace Ui
{
    ui->setupUi(this); // Det grafiska startar, det tillhör "this", som är MainWindow
    connect(ui->pushButton, SIGNAL(pressed()), this, SLOT(klickat()));
}

// Körs när programmet avslutas
MainWindow::~MainWindow()
{
    delete ui;  // Dödar det garfiska
}

// Ett eget slot, som tar emot signaler
void MainWindow::klickat()
{
    ui->lineEdit->setText("Du klickade!"); // En inbygd metod från QLineEdit (eller något QLineEdit ärvt...)
}
