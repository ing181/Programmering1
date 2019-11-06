#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // ett exemplar (a) av programmet deklareras och "finns" på roktigt
    MainWindow w;  // Här skapas en MainWindow
    w.show();  // Här används QMianWindows inbygda metod "show()", som får vårt MainWindow att visa sig
    // return a.exec(); // När programmet avslutas returneras ett heltal från ditt program
    // Du kan kolla vilket heltal det är genom att skriva så här
    int returvarde = a.exec();
    // qDebug() är mycket praktiskt för att kolla olika saker
    // Du måste ha med #include <QDebug> i mainwindow.h
    // Ska vara 0 om allt fungerar som det ska
    qDebug() << "Returvärdet när programmet avslutas är " << returvarde;
    return returvarde;
}
