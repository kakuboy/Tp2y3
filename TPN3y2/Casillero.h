#ifndef CASILLERO_H
#define CASILLERO_H


class Casillero
{
    bool jugador = false;
    bool enemigo = false;
    bool libre = true; //True cuando esta libre, false cuando esta ocupado
public:
    Casillero();

    bool getLibre();
    bool getEnemigo();
    void setDatos(bool jugador, bool enemigo, bool libre);

};

#endif // CASILLERO_H
