#include <iostream>
using namespace std;

// Función para determinar si un número es perfecto
bool esPerfecto(int num) {
  int suma = 0;
  for (int i = 1; i < num; i++) {
    if (num % i == 0) {
      suma += i;
    }
  }
  return suma == num;
}

// Programa principal para imprimir todos los números perfectos entre 1 y 1000
int main() {
  for (int i = 1; i <= 1000; i++) {
    if (esPerfecto(i)) {
      cout << i << " es un numero perfecto, con divisores: ";
      for (int j = 1; j < i; j++) {
        if (i % j == 0) {
          cout << j << " ";
        }
      }
      cout << endl;
    }
  }
  return 0;
}

