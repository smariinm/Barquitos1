#ifndef BARCO_H
#define BARCO_H

#include <string>
#include <cstdlib>

using namespace std;

class Barco {
private:
    string nombre;
    int velocidad;
    int distancia_recorrida;
    int nitro;

public:
    Barco(string nombre);
    void lanzarDado();
    void usarNitro();
    void calcularDistancia();
    void resetearEstado();

    // Getters
    string getNombre() const { return nombre; }
    int getVelocidad() const { return velocidad; }
    int getDistanciaRecorrida() const { return distancia_recorrida; }
};

#endif
