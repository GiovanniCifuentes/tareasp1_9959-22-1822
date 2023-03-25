#include <iostream>

using namespace std;

int potencia(int base, int exponente) {
    if (exponente == 0) {
        return 1;
    } else {
        return base * potencia(base, exponente - 1);
    }
}

int main() {
    int base, exponente;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    int resultado = potencia(base, exponente);
    cout << base << " elevado a la " << exponente << " es igual a " << resultado << endl;

    return 0;
}

