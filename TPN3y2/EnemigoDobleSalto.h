#ifndef ENEMIGODOBLESALTO_H
#define ENEMIGODOBLESALTO_H
#include <QPixmap>
#include "Casillero.h"
#include <QLabel>
#include "Personaje.h"
#include "Enemigo.h"

class EnemigoDobleSalto : public Enemigo
{
public:
    EnemigoDobleSalto(QPixmap);
    void moverEnemigo(int k , int l ,Casillero ***&casilla , QLabel ***&labels);
    Personaje * player;
};

#endif // ENEMIGODOBLESALTO_H
