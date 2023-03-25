#include <iostream>

using namespace std;

void caracterRelleno (string& caracter)
{
    cout << "Ingrese el Caracter a usar: " <<endl;
    cin >> caracter;
}

void dibujarCuadrado(int lado)
{
    string caracter;
    caracterRelleno(caracter);
    cout << "\n";
    for (int i = 0; i < lado; i++) {
    for (int j = 0; j < lado; j++) {
      cout << caracter << " ";
    }
    cout << endl;
  }
}

int main()
{
  int lado;
  cout << "Ingrese el lado del cuadrado: " << endl;
  cin >> lado;
  dibujarCuadrado(lado);
  return 0;
}
