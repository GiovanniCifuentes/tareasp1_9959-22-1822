#include <iostream>
#include <stack>

using namespace std;

void torresHanoi(int n, int origen, int destino, int temporal) {
    stack<int> pilaOrigen, pilaDestino, pilaTemporal;
    int movimientos = 0;

    // Inicializar la pila de origen con los discos
    for (int i = n; i >= 1; i--) {
        pilaOrigen.push(i);
    }

    if (n % 2 == 0) {
        swap(pilaDestino, pilaTemporal);
    }

    while (pilaDestino.size() != n) {
        // Mover disco de origen a destino o viceversa
        if (pilaOrigen.empty() || (!pilaDestino.empty() && pilaDestino.top() < pilaOrigen.top())) {
            pilaOrigen.swap(pilaTemporal);
            swap(origen, temporal);
            swap(pilaOrigen, pilaDestino);
            swap(destino, temporal);
        } else {
            pilaDestino.swap(pilaTemporal);
            swap(destino, temporal);
            swap(pilaOrigen, pilaDestino);
            swap(origen, temporal);
        }

        // Imprimir movimiento
        cout << origen << " -> " << destino << endl;
        movimientos++;
    }

    cout << "Se necesitaron " << movimientos << " movimientos." << endl;
}

int main() {
    int n;
    cout << "Ingrese el número de discos: ";
    cin >> n;
    torresHanoi(n, 1, 3, 2);
    return 0;
}
