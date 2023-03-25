#include <iostream>
#include <cmath>

using namespace std;

double hipotenusa(double lado1, double lado2);

double hipotenusa(double lado1, double lado2)
{
    double total, totalToltal;
    total = pow(lado1, 2) + pow(lado2,2);
    totalToltal = sqrt(total);
    return totalToltal;
}
int main()
{
    double lado1, lado2;
    cout << "Ingrese primer lado: "<<endl;
    cin >> lado1;
    cout << "Ingrese segundo lado: "<<endl;
    cin >> lado2;
    cout << "La hipotenusa es igual a: " << hipotenusa(lado1, lado2) << endl;
}
