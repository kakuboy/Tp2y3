#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include <QTime>
#include "QGridLayout"
#include <QString>
#include "Personaje.h"
#include "Casillero.h"
#include "MatrizMadre.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    MatrizMadre *matrizmadre;
    int** laberinto;
    Personaje * player;
    Casillero *** casilla;
    QWidget *principal;
    QLabel *** labels;
    Ui::MainWindow *ui;
    int dim = 30;
    void inicializarMatriz();
    int getValorMatriz(int i, int j);
    void incializarPersonaje();
    QTimer* timer;
    QTime *time_elapsed;
    QLabel* time_label;

public slots:
    void keyPressEvent(QKeyEvent * e);
    void actualizarTiempo();
};

#endif // MAINWINDOW_H
