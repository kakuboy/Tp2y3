#ifndef JUEGO_H
#define JUEGO_H

#include<QMainWindow>
#include<QTime>
#include<QTimer>
#include<QLabel>

class Juego:public QMainWindow
{
    Q_OBJECT

public slots:
    void actualizarTiempo();
public:
    Juego();
    QTimer* timer;
    QTime *time_elapsed;
    QLabel* time_label;
};

#endif // JUEGO_H
