#ifndef ENEMIGO_H
#define ENEMIGO_H
#include <QPixmap>
#include "Casillero.h"
#include <QLabel>

class Enemigo
{
public:
    Enemigo(QPixmap pixmap);
    virtual void moverEnemigo(Casillero ***&casilla, QLabel ***&labels)=0;
    virtual ~Enemigo();
};

#endif // ENEMIGO_H
