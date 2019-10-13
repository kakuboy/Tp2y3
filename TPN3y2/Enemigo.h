#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <QPixmap>
#include "Casillero.h"
#include <QLabel>
#include <QKeyEvent>

class Enemigo
{
protected:
    QPixmap imagen;
    int xEnemigo;
    int yEnemigo;

public:
    Enemigo(QPixmap pixmap);
    virtual void moverEnemigo(int k , int l ,Casillero ***&casilla, QLabel ***&labels)=0;
    virtual ~Enemigo();
    void ubicarEnemigo(int dimension, Casillero ***&c, QLabel ***&labels);
    int getXEnemigo();
    int getYEnemigo();
};

#endif // ENEMIGO_H
