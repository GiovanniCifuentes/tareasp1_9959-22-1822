#include <iostream>
using namespace std;

inline double areaCirculo(double radio)
{
    return 3.14159 * radio * radio;
}

int main()
{
    double radio;
    cout << "Ingrese el radio del circulo: ";
    cin >> radio;
    cout << "El area del circulo es: " << areaCirculo(radio) << endl;
    return 0;
}
