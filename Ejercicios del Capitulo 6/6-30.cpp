
#include <iostream>
using namespace std;

int invertirDigitos(int num) {
    int invertido = 0;
    while (num > 0) {
        int digito = num % 10;
        invertido = invertido * 10 + digito;
        num /= 10;
    }
    return invertido;
}

int main() {
    int num;
    cout << "Ingrese un numero entero: ";
    cin >> num;
    cout << "El numero con sus digitos invertidos es: " << invertirDigitos(num) << endl;
    return 0;
}
