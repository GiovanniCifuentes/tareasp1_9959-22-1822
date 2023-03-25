#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int numeros;
    double y, y1, x, total;
    cout << "Ingrese cuantos numeros quieres usar: " << endl;
    cin >>numeros;
    for (int i; i<numeros;i++)
    {
        cout << "Ingrese el numero " << (int) i + 1 << endl;
        cin >> x;
        y1 = x + 0.5;
        y = floor(x + 0.5);
        cout << "El numero original era: " << y1 <<endl;
        cout << "El numero redondeado es: " << y <<endl;
    }
}
