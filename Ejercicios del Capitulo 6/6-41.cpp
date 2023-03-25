
#include <iostream>
using namespace std;

int mcd(int x, int y) {
    if (y == 0) {
        return x;
    } else {
        return mcd(y, x % y);
    }
}

int main() {
    int x, y;
    cout << "Ingrese dos numeros enteros para calcular su MCD: ";
    cin >> x >> y;
    cout << "El MCD de " << x << " y " << y << " es: " << mcd(x, y) << endl;
    return 0;
}
