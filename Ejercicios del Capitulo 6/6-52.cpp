#include <iostream>
using namespace std;

template <typename T>
T maximo(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Probando con enteros
    int num1 = 5, num2 = 10;
    cout << "El maximo entre " << num1 << " y " << num2 << " es: " << maximo(num1, num2) << endl;

    // Probando con caracteres
    char letra1 = 'a', letra2 = 'z';
    cout << "El maximo entre " << letra1 << " y " << letra2 << " es: " << maximo(letra1, letra2) << endl;

    // Probando con números de punto flotante
    float decimal1 = 3.1416, decimal2 = 2.7183;
    cout << "El maximo entre " << decimal1 << " y " << decimal2 << " es: " << maximo(decimal1, decimal2) << endl;

    return 0;
}
