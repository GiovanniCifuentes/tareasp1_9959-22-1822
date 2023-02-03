//Nombre: Giovanni Steve Cifuentes Palencia
//Carné: 9959-22-1822

#include <iostream>

using namespace std;
int OperacionS(int a, int b);

int main()
{
    int total, v1, v2,operacion;
    char opcion;

    cout << "Simulacion de una Calculadora (Basica)"<< endl;

    cout << " "<< endl;
    cout << "----------------------------------------------------"<< endl;
    cout << " "<< endl;
    cout<<"Ingrese Primer Numero"<<endl;
    cin >>v1;
    cout<<"Ingrese Segundo Numero"<<endl;
    cin >>v2;
    do{
        OperacionS(v1,v2);//funcion para poder realizar todas las operacion
        cout << " "<< endl;
        cout << "Deseas realizar otra operacion? escribir s si Si, o n si No"<<endl;
        cin >> opcion;
    }while (opcion == 's');//ciclo para repetir otravez el codigo
    cout << " "<< endl;
    cout << "No se realizara ninguna operacion mas"<< endl;



    return 0;
}

int OperacionS(int a, int b){ //la funcion
    int total, ope;
    cout << "Ingresa que operacion deseas realizar"<< endl;
    cout << " "<< endl;
    cout << "Para sumar escribir = 1"<< endl;
    cout << "Para resta escribir = 2"<< endl;
    cout << "Para Multiplicacion escribir = 3"<< endl;
    cout << "Para Division escribir = 4"<< endl;
    cout << "Para sacar el Modulo escribir = 5"<< endl;
    cin >> ope;

    switch(ope){
    case 1:
        total = a + b;
        cout << "El resultado de la suma es de: "<<total;
        break;
    case 2:
        total = a - b;
        cout << "El resultado de la resta es de: "<<total;
        break;
    case 3:
        total = a * b;
        cout << "El resultado de la multiplicacion es de: "<<total;
        break;
    case 4:
        total = a / b;
        cout << "El resultado de la division es de: "<<total;
        break;
    case 5:
        total = a % b;
        cout << "El resultado del modulo entre los 2 numeros es de: "<<total;
        break;
    default:
        cout << "----------ERROR-----------"<<endl;
        cout << "Datos Invalidos, solo se puede ingresar numeros"<<endl;
        cout << " "<< endl;
        break;
    }
    return total;
}
