#ifndef ENEMIGOPERSIGUE_H
#define ENEMIGOPERSIGUE_H
#include <QPixmap>
#include "Casillero.h"
#include <QLabel>
#include "Personaje.h"
#include "Enemigo.h"

class EnemigoPersigue : public Enemigo
{
public:
    EnemigoPersigue(QPixmap);
    void moverEnemigo(int k , int l ,Casillero ***&casilla,QLabel ***&labels);
    Personaje * player;
};

#endif // ENEMIGOPERSIGUE_H
