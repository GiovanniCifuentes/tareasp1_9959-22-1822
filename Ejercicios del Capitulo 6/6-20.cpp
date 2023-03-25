#include <iostream>

using namespace std;

bool multiple(int num1, int num2);

bool multiple(int num1, int num2) {
  if (num2 % num1 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int num1, num2;
  cout << "Ingrese el primer numero: " <<endl;
  cin >> num1;
  cout << "Ingrese el segundo numero: " <<endl;
  cin >> num2;
  cout << "\n" <<endl;
    if (multiple(num1, num2)) {
      cout << num2 << " es multiplo de " << num1 << endl;
    } else {
      cout << num2 << " no es multiplo de " << num1 << endl;
    }
  return 0;
}
