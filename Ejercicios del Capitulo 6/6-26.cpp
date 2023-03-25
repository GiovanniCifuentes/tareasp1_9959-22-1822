#include <iostream>
#include <iomanip>
using namespace std;

// Función que convierte grados Fahrenheit a grados Celsius
double centigrados(double fahrenheit) {
    return static_cast<double>((fahrenheit - 32) * 5 / 9);
}

// Función que convierte grados Celsius a grados Fahrenheit
double fahrenheit(double centigrados) {
    return static_cast<double>(centigrados * 9 / 5 + 32);
}

int main() {
    cout << "Centigrados\tFahrenheit\t|\tFahrenheit\tCentigrados" << endl;
    cout << "-----------------------------------------------------------------" << endl;

    // Imprime la tabla de equivalencias de temperatura
    for (double i = 0; i <= 100; i++) {
        double f = fahrenheit(i);
        cout << setw(5) << i << "\t\t" << setw(5) << f << "\t\t|\t";
        if (f >= 32 && f <= 212) {
            double c = centigrados(f);
            cout << setw(5) << f << "\t\t" << setw(5) << c;
        }
        cout << endl;
    }

    return 0;
}
