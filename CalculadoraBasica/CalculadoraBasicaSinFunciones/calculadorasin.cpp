//Nombre: Giovanni Steve Cifuentes Palencia
//Carné: 9959-22-1822
#include <iostream>

using namespace std;

int main()
{
    int Valor1, Valor2, operacion;
    int Suma, Resta, Divicion, Multiplicacion, Modulo,  Total;
    char opcion;

    cout << "Simulacion de una Calculadora (Basica)"<< endl;

    cout << " "<< endl;
    cout << "----------------------------------------------------"<< endl;
    cout << " "<< endl;

    do{
    cout << " "<< endl;

    cout << "Ingrese primer valor: "<< endl;
    cin >> Valor1;
    cout << "Ingrese segundo valor: "<< endl;
    cin >> Valor2;

    cout << " "<< endl;

    cout << "Ingresa que operacion deseas realizar"<< endl;
    cout << " "<< endl;
    cout << "Para sumar escribir = 1"<< endl;
    cout << "Para resta escribir = 2"<< endl;
    cout << "Para Multiplicacion escribir = 3"<< endl;
    cout << "Para Division escribir = 4"<< endl;
    cout << "Para sacar el Modulo escribir = 5"<< endl;
    cin >> operacion;
    cout << " "<< endl;

    switch(operacion){
    case 1:
        Total = Valor1 + Valor2;
        cout << "El resultado de la suma es de: "<<Total;
        break;
    case 2:
        Total = Valor1 - Valor2;
        cout << "El resultado de la resta es de: "<<Total;
        break;
    case 3:
        Total = Valor1 * Valor2;
        cout << "El resultado de la multiplicacion es de: "<<Total;
        break;
    case 4:
        Total = Valor1 / Valor2;
        cout << "El resultado de la division es de: "<<Total;
        break;
    case 5:
        Total = Valor1 % Valor2;
        cout << "El resultado del modulo entre los 2 numeros es de: "<<Total;
        break;
    default:
        cout << "----------ERROR-----------"<<endl;
        cout << " "<< endl;
        cout << "------DATOS INVALIDOS-----"<<endl;
        cout << " "<< endl;
        break;
    }
    cout << " "<< endl;
    cout << "Deseas realizar otra operacion? escribir s si Si, o n si No"<<endl;
    cin >> opcion;


    }while (opcion == 's');
    cout << " "<< endl;
    cout << "No se realizara ninguna operacion mas"<< endl;
    return 0;
}
