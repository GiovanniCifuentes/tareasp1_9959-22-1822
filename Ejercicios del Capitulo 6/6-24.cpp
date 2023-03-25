#include <iostream>

using namespace std;

void imprimirSeparado(int n) {
        if (n >= 1 & n <= 32767)
    {
        int d1, d2, d3, d4, d5;
        d1 = n / 10000;
        d2 = (n / 1000) % 10;
        d3 = (n / 100) % 10;
        d4 = (n / 10) % 10;
        d5 = n % 10;

        cout << d1 << "  " << d2 << "  " << d3 << "  " << d4 << "  " << d5 << endl;
    }else{
        cout << "El número debe estar entre 1 y 32767" << endl;
    }
}

int main ()
{
    int a, b, n, m;
    int cociente, residuo;
    cout << "Ingrese el primer numero: " <<endl;
    cin >> a;
    cout << "Ingrese el segundo numero: " <<endl;
    cin >> b;
    cociente = a/b;
    residuo = a%b;
    cout << "El cociente es: " << cociente <<endl;
    cout << "El residuo es: " << residuo <<endl;
    cout << "Ingrese el numero para la seccion c: " <<endl;
    cin >> n;
    imprimirSeparado(n);
    return 0;
}
