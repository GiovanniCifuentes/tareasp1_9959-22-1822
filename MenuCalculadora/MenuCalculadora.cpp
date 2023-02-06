//fecha de creacion: 06/02/2022
//autor; Giovanni Cifuentes
//Este programa tiene como objetivo mostrar que el curso de funciones a travez de una calculadora

#include <iostream>
#include <cstdlib>

using namespace std;

//Definicion de prototipos

void sumar();
void restar();
void multiplicar ();
void dividir();

int main (){
    int opciones; //capturar la opcion que requira
    bool repetir = true; //para mantener el ciclo (repecion al regresar al menu)
    do{
        system("cls");
        cout << "\n\n\t\tMenu Calculadora"<< endl;
        cout << "\t\t-----------------"<< endl;
        cout << "\t1. Suma dos numeros"<< endl;
        cout << "\t2. Restar dos numeros"<< endl;
        cout << "\t3. Multiplicar dos numeros"<< endl;
        cout << "\t4. Dividir dos numeros"<< endl;
        cout << "\t5. --------SALIR--------"<< endl;
        cout << "\n\t ingrese una opcion: ";
        cin >> opciones;


        switch (opciones){
        case 1:
            sumar();
            break;
        case 2:
            restar();
            break;
        case 3:
            multiplicar();
            break;
        case 4:
            dividir();
            break;
        case 5:
            cout << "\n\tNo se realizara ninguna operacion"<<endl;
            cout << "\n\tSaliendo del programa"<<endl;
            repetir = false;
            break;
        }
    }while(repetir);

        return 0;

}
//implementacion de funciones
void sumar()
{
    int primerNumero, segundoNumero;
    float resultadoSumar;
    cout <<"\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout <<"\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout <<"\n\t-----------------------"<< endl;
    resultadoSumar = primerNumero + segundoNumero;
    cout <<"\tResultado de la suma: "<<resultadoSumar<<endl;
    system ("pause > nu1");

}
void restar()
{
    int primerNumero, segundoNumero;
    float resultadoRestar;
    cout <<"\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout <<"\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout <<"\n\t-----------------------"<< endl;
    resultadoRestar = primerNumero - segundoNumero;
    cout <<"\tResultado de la resta: "<<resultadoRestar<<endl;
    system ("pause > nu1");

}
void multiplicar()
{
    int primerNumero, segundoNumero;
    float resultadoMulti;
    cout <<"\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout <<"\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout <<"\n\t-----------------------"<< endl;
    resultadoMulti = primerNumero * segundoNumero;
    cout <<"\tResultado de la Multiplicacion: "<<resultadoMulti<<endl;
    system ("pause > nu1");

}
void dividir()
{
    int primerNumero, segundoNumero;
    float resultadoDivicion;
    cout <<"\n\tIngrese primer Numero: ";
    cin >> primerNumero;
    cout <<"\n\tIngrese segundo Numero: ";
    cin >> segundoNumero;
    cout <<"\n\t-----------------------"<< endl;
    if (segundoNumero == 0){
        cout <<"\n\tSegundo numero no puede ser cero (0) --ERROR--"<<endl;
    }else{
        resultadoDivicion = primerNumero / segundoNumero;
        cout <<"\tResultado de la suma: "<<resultadoDivicion<<endl;
    }

    system ("pause > nu1");

}
