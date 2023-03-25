#include <iostream>

using namespace std;

enum class TipoCuenta { AHORROS, CHEQUES, INVERSION };

int main() {
    TipoCuenta cuentaActual = TipoCuenta::AHORROS;
    switch (cuentaActual) {
        case TipoCuenta::AHORROS:
            cout << "Cuenta de ahorros" << endl;
            break;
        case TipoCuenta::CHEQUES:
            cout << "Cuenta de cheques" << endl;
            break;
        case TipoCuenta::INVERSION:
            cout << "Cuenta de inversión" << endl;
            break;
    }
    return 0;
}

