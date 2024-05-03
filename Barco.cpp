#include "Barco.h"
#include <iostream>

using namespace std;

Barco::Barco(string nombre) {
    this->nombre = nombre;
    velocidad = 0;
    distancia_recorrida = 0;
    nitro = 1;
}

void Barco::lanzarDado() {
    int dado = rand() % 6 + 1;
    velocidad += dado;
    cout << "Dado: " << dado << endl;
}

void Barco::usarNitro() {
    if (nitro > 0) {
        nitro--;
        int resultado = rand() % 2;
        if (resultado == 0) {
            velocidad /= 2;
            cout << "¡Nitro usado! Velocidad reducida a " << velocidad << endl;
        }
        else {
            velocidad *= 2;
            cout << "¡Nitro usado! Velocidad aumentada a " << velocidad << endl;
        }
    }
}

void Barco::calcularDistancia() {
    distancia_recorrida += velocidad * 100;
}

void Barco::resetearEstado() {
    velocidad = 0;
    distancia_recorrida = 0;
    nitro = 1;
}
