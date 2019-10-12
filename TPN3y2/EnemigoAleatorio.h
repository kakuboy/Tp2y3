#ifndef ENEMIGOALEATORIO_H
#define ENEMIGOALEATORIO_H
#include "Enemigo.h"

class EnemigoAleatorio : public Enemigo
{
public:
    EnemigoAleatorio(QPixmap);
    Casillero moverEnemigo(int k , int l ,Casillero ***&casilla);
};

#endif // ENEMIGOALEATORIO_H
