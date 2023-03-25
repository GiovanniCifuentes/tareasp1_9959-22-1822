#include <iostream>
#include <iomanip>

using namespace std;

void calcularCargos();

void calcularCargos()
{
    int cliente;
    double horasCliente, total, totalAdicional, totalTotal;
    double coutaTresHoras = 2.00;
    double coutaAdicional = 0.50;
    double coutaVeinticuadro = 10.00;

    cout << "ingrese cuantos clientes ingresara: "<<endl;
    cin >> cliente;

    for (int i; i < cliente; i++)
    {
        cout << "ingrese cuantas horas de estacionamiento tiene el cliente: "<<endl;
        cin >> horasCliente;
        total = horasCliente*0.6666;
        cout << setw(10) << " Automovil " << setw(15) << " Horas " << setw(15) << " Cargo " << endl;
        if (horasCliente == 3)
        {
           cout << setw(10)  << (int) i + 1 << setw(15) << horasCliente << setw(15) <<  coutaTresHoras << endl;
        }else if(horasCliente>3 & horasCliente<23)
        {
            totalTotal = total + coutaAdicional;
            cout << setw(10)  << (int) i + 1 << setw(15) << horasCliente << setw(15) << totalTotal << endl;
        }else if(horasCliente == 24)
        {
            cout << setw(10)  << (int) i + 1 << setw(15) << horasCliente << setw(15) << coutaVeinticuadro << endl;
        }else if(horasCliente < 3)
        {
            cout << setw(10)  << (int) i + 1 << setw(15) << horasCliente << setw(15) << total << endl;
        }else
        {
            cout << setw(10)  << (int) i + 1 << setw(15) << horasCliente << setw(15) << "+24" << endl;
            cout << "Tiene mas de 24 horas!!!!" <<endl;
        }

    }
}
int main()
{
    calcularCargos();
    return 0;
}
