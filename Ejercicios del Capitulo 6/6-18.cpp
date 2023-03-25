#include <iostream>

using namespace std;

int enteroPotencia(int base, int exponente);

int main()
{
    int base, exponente;
    cout << "Ingrese la base: " << endl;
    cin >> base;
    cout << "Ingrese el exponente: " << endl;
    cin >> exponente;
    cout << base << "^" << exponente << " = " << enteroPotencia(base, exponente) << endl;
    return 0;
}
int enteroPotencia(int base, int exponente)
{
    int total = 1;
    for (int i = 0; i < exponente; i++) {
        total *= base;
    }
    return total;
}
