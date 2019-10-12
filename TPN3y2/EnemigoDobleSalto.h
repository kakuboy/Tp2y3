#ifndef ENEMIGODOBLESALTO_H
#define ENEMIGODOBLESALTO_H
#include <QPixmap>
#include "Casillero.h"
#include <QLabel>
#include "Personaje.h"

class EnemigoDobleSalto
{
public:
    EnemigoDobleSalto();
    Casillero moverEnemigo(int k , int l ,Casillero ***&casilla);
    Personaje * player;
};

#endif // ENEMIGODOBLESALTO_H
