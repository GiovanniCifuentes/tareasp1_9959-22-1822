#include <iostream>
#include <cmath> // necesario para las funciones matemáticas

using namespace std;

int main() {
    double x, y; // valores de entrada para pow(x,y)
    int num_values = 10; // número de valores de entrada a probar
    double start = -10.0, end = 10.0, increment = 1.0; // valores de inicio, fin e incremento para el bucle

    // Iterar a través de diferentes valores de entrada y mostrar los valores de retorno para cada función
    for (double i = start; i <= end; i += increment) {
        cout << "x = " << i << endl;
        cout << "ceil(x) = " << ceil(i) << endl;
        cout << "cos(x) = " << cos(i) << endl;
        cout << "exp(x) = " << exp(i) << endl;
        cout << "fabs(x) = " << fabs(i) << endl;
        cout << "floor(x) = " << floor(i) << endl;
        cout << "fmod(x,2) = " << fmod(i, 2) << endl;
        cout << "log(x) = " << log(i) << endl;
        cout << "log10(x) = " << log10(i) << endl;
        cout << "pow(x,y): ";
        for (int j = 0; j <= num_values; j++) {
            y = j - num_values / 2;
            cout << " " << pow(i, y);
        }
        cout << endl;
        cout << "sin(x) = " << sin(i) << endl;
        cout << "sqrt(x) = " << sqrt(fabs(i)) << endl;
        cout << "tan(x) = " << tan(i) << endl;
        cout << endl;
    }
    return 0;
}

