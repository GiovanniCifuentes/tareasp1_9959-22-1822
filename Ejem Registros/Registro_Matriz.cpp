#include <iostream>
using namespace std;

int main()
{
    struct datosPersona
    {
        string nombre;
        char inicial;
        int edad;
        float nota;
    };

    datosPersona *persona = new datosPersona[5];//tipo de dato cona arrray

    for (int i=0; i<5; i++)
    {
        cout << "Dime el nombre de la persona"<<i<<endl;
        cin >> persona[i].nombre;
        cout << "Dime la nota de la persona"<<i<<endl;
        cin >> persona[i].nota;
    }

    cout << "La persona 3 es: " << persona [2].nombre << endl;
    cout << "La nota de la persona 3 es: " << persona [2].nota << endl;

    return 0;
}

