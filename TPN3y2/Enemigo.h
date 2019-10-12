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
    virtual Casillero moverEnemigo(int k , int l ,Casillero ***&casilla)=0;
    virtual ~Enemigo();
    void ubicarEnemigo(int dimension, Casillero ***&c, QLabel ***&labels);
};

#endif // ENEMIGO_H
