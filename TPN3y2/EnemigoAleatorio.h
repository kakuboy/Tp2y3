#ifndef ENEMIGOALEATORIO_H
#define ENEMIGOALEATORIO_H
#include "Enemigo.h"

class EnemigoAleatorio : public Enemigo
{
public:
    EnemigoAleatorio(QPixmap);
    void moverEnemigo(Casillero ***&casilla, QLabel ***&labels);
};

#endif // ENEMIGOALEATORIO_H
