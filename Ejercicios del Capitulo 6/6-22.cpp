#include <iostream>

using namespace std;

void dibujarCuadrado(int lado) {
  for (int i = 0; i < lado; i++) {
    for (int j = 0; j < lado; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

int main() {
  int lado;
  cout << "Ingrese el lado del cuadrado: " << endl;
  cin >> lado;
  dibujarCuadrado(lado);
  return 0;
}
