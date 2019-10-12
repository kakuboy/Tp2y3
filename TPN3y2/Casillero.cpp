#include "Casillero.h"

Casillero::Casillero()
{
    this->jugador = false;
    this->enemigo = false;
    this->libre = true; //True cuando esta libre, false cuando esta ocupado
}

bool Casillero::getLibre()
{
    return this->libre;
}

bool Casillero::getEnemigo()
{
    return this->enemigo;
}

void Casillero::setDatos(bool jugador, bool enemigo, bool libre)
{
    this->jugador = jugador;
    this->enemigo = enemigo;
    this->libre = libre;
}
