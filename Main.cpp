#include "Barco.h"
#include <iostream>

using namespace std;

int main() {
    srand(time(NULL));

    string nombre_barco1, nombre_barco2;

    cout << "Ingresa el nombre del primer barco: ";
    getline(cin, nombre_barco1);

    cout << "Ingresa el nombre del segundo barco: ";
    getline(cin, nombre_barco2);

    Barco barco1(nombre_barco1);
    Barco barco2(nombre_barco2);

    cout << "\nDistancia inicial recorrida por " << barco1.getNombre() << ": " << barco1.getDistanciaRecorrida() << " metros" << endl;
    cout << "Distancia inicial recorrida por " << barco2.getNombre() << ": " << barco2.getDistanciaRecorrida() << " metros" << endl;

    for (int turno = 1; turno <= 5; turno++) {
        cout << "\nTurno " << turno << endl;

        cout << "\nTurno de " << barco1.getNombre() << endl;
        barco1.lanzarDado();
        string usarNitro;
        cout << "¿Quieres usar nitro? (s/n): ";
        cin >> usarNitro;
        if (usarNitro == "s") {
            barco1.usarNitro();
        }
        barco1.calcularDistancia();
        cout << "Distancia recorrida por " << barco1.getNombre() << ": " << barco1.getDistanciaRecorrida() << " metros" << endl;

        cout << "\nTurno de " << barco2.getNombre() << endl;
        barco2.lanzarDado();
        cout << "¿Quieres usar nitro? (s/n): ";
        cin >> usarNitro;
        if (usarNitro == "s") {
            barco2.usarNitro();
        }
        barco2.calcularDistancia();
        cout << "Distancia recorrida por " << barco2.getNombre() << ": " << barco2.getDistanciaRecorrida() << " metros" << endl;
    }

    // Comprobación del ganador
    int distancia_barco1 = barco1.getDistanciaRecorrida();
    int distancia_barco2 = barco2.getDistanciaRecorrida();

    cout << "\nDistancia total recorrida por " << barco1.getNombre() << ": " << distancia_barco1 << " metros" << endl;
    cout << "Distancia total recorrida por " << barco2.getNombre() << ": " << distancia_barco2 << " metros" << endl;

    if (distancia_barco1 > distancia_barco2) {
        cout << "\nEl ganador es: " << barco1.getNombre() << endl;
    }
    else if (distancia_barco2 > distancia_barco1) {
        cout << "\nEl ganador es: " << barco2.getNombre() << endl;
    }
    else {
        cout << "\nEmpate" << endl;
    }

    return 0;
}
