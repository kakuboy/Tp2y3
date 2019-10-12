#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <QPixmap>
#include "Casillero.h"
#include <QLabel>

class Enemigo
{
public:
    Enemigo(QPixmap pixmap);
    virtual Casillero moverEnemigo(int k , int l ,Casillero ***&casilla)=0;
    virtual ~Enemigo();
};

#endif // ENEMIGO_H
