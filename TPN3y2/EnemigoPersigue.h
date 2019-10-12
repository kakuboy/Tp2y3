#ifndef ENEMIGOPERSIGUE_H
#define ENEMIGOPERSIGUE_H
#include <QPixmap>
#include "Casillero.h"
#include <QLabel>
#include "Personaje.h"
class EnemigoPersigue
{
public:
    EnemigoPersigue();
    Casillero moverEnemigo(int k , int l ,Casillero ***&casilla);
    Personaje * player;
};

#endif // ENEMIGOPERSIGUE_H
