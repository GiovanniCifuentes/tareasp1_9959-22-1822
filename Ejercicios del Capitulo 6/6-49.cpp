#include <iostream>

using namespace std;

// Función para triplicar la variable "cuenta" por valor
int triplicarPorValor(int cuenta) {
    cuenta *= 3;
    return cuenta;
}

// Función para triplicar la variable "cuenta" por referencia
void triplicarPorReferencia(int& cuenta) {
    cuenta *= 3;
}

int main() {
    int cuenta;

    cout << "Ingrese numero para la cuenta: " << endl;
    cin >> cuenta;

    // Triplicar la variable "cuenta" por valor
    int cuenta_triplicada_por_valor = triplicarPorValor(cuenta);
    cout << "Cuenta triplicada por valor: " << cuenta_triplicada_por_valor << endl;

    // Triplicar la variable "cuenta" por referencia
    triplicarPorReferencia(cuenta);
    cout << "Cuenta triplicada por referencia: " << cuenta << endl;

    return 0;
}
