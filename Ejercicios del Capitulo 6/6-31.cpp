#include <iostream>

using namespace std;

int mcd(int a, int b);

int main() {
    int num1, num2;
    cout << "Ingrese el primer numero" << endl;
    cin >> num1;
    cout << "Ingrese el segundo numero" << endl;
    cin >> num2;
    cout << "El MCD de " << num1 << " y " << num2 << " es: " << mcd(num1, num2) << endl;
    return 0;
}

int mcd(int a, int b) {
    int menor = (a < b) ? a : b;
    int mcd = 1;
    for (int i = 2; i <= menor; i++) {
        if (a % i == 0 && b % i == 0) {
            mcd = i;
        }
    }
    return mcd;
}
