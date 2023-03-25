#include <iostream>
#include <iomanip>
using namespace std;

unsigned long factorial(unsigned long, int); // prototipo de función

int main()
{
    // calcula los factoriales del 0 al 10
    for (unsigned int contador = 0; contador <= 10; ++contador)
    {
        cout << setw(2) << contador << "! = " << factorial(contador, 0) << endl;
    }
    return 0;
}

// definición recursiva de la función factorial
unsigned long factorial(unsigned long numero, int nivel)
{
    cout << setw(nivel*4) << " " << "factorial(" << numero << ")" << endl;
    if (numero <= 1) // evalúa el caso base
    {
        cout << setw(nivel*4) << " " << "retorna 1" << endl;
        return 1; // casos base: 0! = 1 y 1! = 1
    }
    else // paso recursivo
    {
        unsigned long resultado = numero * factorial(numero - 1, nivel + 1);
        cout << setw(nivel*4) << " " << "retorna " << resultado << endl;
        return resultado;
    }
}

