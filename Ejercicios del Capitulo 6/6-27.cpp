#include <iostream>
#include <cmath>

using namespace std;

double encontrarMinimo(double num1, double num2, double num3) {
    double min = num1;
    if(num2 < min) {
        min = num2;
    }
    if(num3 < min) {
        min = num3;
    }
    return min;
}

int main() {
    double num1, num2, num3;
    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;
    cout << "Ingrese el tercer numero: ";
    cin >> num3;

    double minimo = encontrarMinimo(num1, num2, num3);
    cout << "El numero mas pequeño es: " << minimo << endl;

    return 0;
}
