#include <iostream>

using namespace std;

int puntosCalidad(int promedio);

int puntosCalidad(int promedio) {
    if (promedio >= 90 && promedio <= 100) {
        return 4;
    } else if (promedio >= 80 && promedio <= 89) {
        return 3;
    } else if (promedio >= 70 && promedio <= 79) {
        return 2;
    } else if (promedio >= 60 && promedio <= 69) {
        return 1;
    } else {
        return 0;
    }
}

int main ()
{
    int promedio;
    cout <<"Ingrese el promedio: " << endl;
    cin >> promedio;
    cout << "El promedio es igual a: " << puntosCalidad(promedio) << endl;
}
