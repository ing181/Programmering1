
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui // Ett namespace definieras...
{
class MainWindow; // ...MainWindow, som hör till namespace Ui deklareras
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow // Klassen MainWindow definieras, ärver allt från QMainWindow ( kolon ":")
{
    Q_OBJECT // Ett Qt macro. Det vill säga, "Q_OBJECT" ersätts med en massa C++ kod
    // precis före kompileringen.

public:
    MainWindow(QWidget *parent = nullptr); // Metod som körs när programmet startar (Se mainwindow.cpp)
    ~MainWindow(); // Metod som körs när programmet avslutas (Se mainwindow.cpp)

private:
    Ui::MainWindow *ui; // Variabeln ui deklareras, en "pekare", kan innehålla adressen till en MainWindow
private slots:
    void klickat();  // Hittat på själv
};
#endif // MAINWINDOW_H
