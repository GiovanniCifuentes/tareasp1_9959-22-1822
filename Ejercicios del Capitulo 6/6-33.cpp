
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Función para simular el lanzamiento de una moneda
int tirar() {
    // Genera un número aleatorio entre 0 y 1
    int lado = rand() % 2;
    return lado;
}

int main() {
    // Inicializa el generador de números aleatorios
    srand(time(NULL));

    int cara = 0;
    int cruz = 0;

    // Lanza la moneda 100 veces y cuenta el número de caras y cruces
    for (int i = 0; i < 100; i++) {
        int lado = tirar();
        if (lado == 0) {
            cout << "Cara" << endl;
            cara++;
        } else {
            cout << "Cruz" << endl;
            cruz++;
        }
    }

    // Imprime los resultados
    cout << "Numero de caras: " << cara << endl;
    cout << "Numero de cruces: " << cruz << endl;

    return 0;
}
