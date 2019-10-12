#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <QPixmap>
#include <QLabel>
#include <QKeyEvent>
#include "Casillero.h"

class Personaje
{
protected:
    QPixmap imagen;
    int x;
    int y;
public:
    Personaje(QPixmap pixmap);

    int getX();
    int getY();
    void ubicarPersonaje(int dimension, Casillero ***&c, QLabel ***&labels);
    void setX(int x);
    void setY(int y);
    void moverPersonaje(QKeyEvent *e, Casillero ***&c, QLabel ***&labels);

};

#endif // PERSONAJE_H
