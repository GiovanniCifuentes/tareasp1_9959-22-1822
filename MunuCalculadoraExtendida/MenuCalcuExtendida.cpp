//fecha de creacion: 06/02/2022
//autor; Giovanni Cifuentes
//Este programa tiene como objetivo mostrar que el curso de funciones a travez de una calculadora
//Calculadora Extendida

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

//Definicion de prototipos

void menuPrincipal();
void menuOperacionesBasicas();
void sumar();
void restar();
void multiplicar ();
void dividir();
void menuOperacionesExtendidas();
void factorial();
void Elevado();
void coseno();
void redondearAbajo();
void seno();
void raizCuadrada();


int main (){
    menuPrincipal();

    return 0;

}
//implementacion de funciones
void menuPrincipal(){
    int opciones; //capturar la opcion que requira
    bool repetir = true; //para mantener el ciclo (repecion al regresar al menu)
    do{
        system("cls");
        cout << "\n\n\t\tMENU PRINCIPAL"<< endl;
        cout << "\t\t-----------------"<< endl;
        cout << "\t1. Operaciones Basicas"<< endl;
        cout << "\t2. Opereciones Extendidas"<< endl;
        cout << "\t3. --------SALIR--------"<< endl;
        cout << "\n\t ingrese una opcion: ";
        cin >> opciones;


        switch (opciones){
        case 1:
            menuOperacionesBasicas();
            break;
        case 2:
            menuOperacionesExtendidas();
            break;
        case 3:
            cout << "\n\tNo se realizara ninguna operacion"<<endl;
            cout << "\n\tSaliendo del programa"<<endl;
            repetir = false;
            break;
        }
    }while(repetir);
}

void menuOperacionesExtendidas(){
    int opciones; //capturar la opcion que requira
    bool repetir = true; //para mantener el ciclo (repecion al regresar al menu)
    do{
        system("cls");
        cout << "\n\n\t\tMenu Operaciones Extendidas"<< endl;
        cout << "\t\t-----------------------------"<< endl;
        cout << "\t1. Factorial"<< endl;
        cout << "\t2. Elevar un numero"<< endl;
        cout << "\t3. Coseno de un numero"<< endl;
        cout << "\t4. Redondear el numero hacia abajo"<< endl;
        cout << "\t5. Seno de un numero"<< endl;
        cout << "\t6. Raiz Cuadrada"<< endl;
        cout << "\t7. --------SALIR--------"<< endl;
        cout << "\n\t ingrese una opcion: ";
        cin >> opciones;


        switch (opciones){
        case 1:
            factorial();
            break;
        case 2:
            Elevado();
            break;
        case 3:
            coseno();
            break;
        case 4:
            redondearAbajo();
            break;
        case 5:
            seno();
            break;
        case 6:
            raizCuadrada();
            break;
        case 7:
            repetir = false;
            break;
        }
    }while(repetir);

}
void factorial(){
    system("cls");
    int numeroIngresado, i;
    float resultadoFactorial;
    cout << "\n\n\t\tCalculo del Factorial"<< endl;
    cout << "\t\t--------------------------"<< endl;
    cout <<"\n\tIngrese Numero: ";
    cin >> numeroIngresado;
    cout <<"\n\t-----------------------"<< endl;
    resultadoFactorial=1;
    for (i=1; i<=numeroIngresado; i++){
        resultadoFactorial = resultadoFactorial * i;
    }
    cout << "\t"<< numeroIngresado <<"! = "<<resultadoFactorial<<endl;
    system ("pause > nul");
}
void Elevado(){
    system("cls");
    double numeroPrimero, NumeroSegundo;
    cout << "\n\n\t\tDevuelve el valor de x elevado a y"<< endl;
    cout << "\t\t--------------------------"<< endl;
    cout <<"\n\tIngrese el Numero: ";
    cin >> numeroPrimero;
    cout <<"\n\tIngrese a Cuanto lo quiere Elevar: ";
    cin >> NumeroSegundo;
    cout <<"\n\t-------------------------------------"<< endl;
    cout << "\t"<< numeroPrimero <<"^"<<NumeroSegundo<<" = "<<pow(numeroPrimero, NumeroSegundo)<<endl;
    system ("pause > nul");

}
void coseno(){
    system("cls");
    double ingreseNumero;
    cout << "\n\n\t\tDevuelve el Coseno del Numero (el numero esta en radiantes)"<< endl;
    cout << "\t\t----------------------------------------------------------------"<< endl;
    cout <<"\n\tIngrese el Numero: ";
    cin >> ingreseNumero;
    cout <<"\n\t-------------------------------------"<< endl;
    cout << "\tCoseno de "<< ingreseNumero <<" = "<<cos(ingreseNumero)<<endl;
    system ("pause > nul");
}
void redondearAbajo(){
    system("cls");
    double ingreseNumero;
    cout << "\n\n\t\tRedondea el numero hacia abajo al entero mas cercano"<< endl;
    cout << "\t\t--------------------------------------------------------"<< endl;
    cout <<"\n\tIngrese el Numero: ";
    cin >> ingreseNumero;
    cout <<"\n\t-------------------------------------"<< endl;
    cout << "\tEl resultado es igual a:"<<floor(ingreseNumero)<<endl;
    system ("pause > nul");
}
void seno(){
    system("cls");
    double ingreseNumero;
    cout << "\n\n\t\tDevuelve el Seno del Numero (el numero esta en radiantes)"<< endl;
    cout << "\t\t----------------------------------------------------------------"<< endl;
    cout <<"\n\tIngrese el Numero: ";
    cin >> ingreseNumero;
    cout <<"\n\t-------------------------------------"<< endl;
    cout << "\tEl Seno de "<< ingreseNumero <<" = "<<sin(ingreseNumero)<<endl;
    system ("pause > nul");
}
void raizCuadrada(){
    system("cls");
    double ingreseNumero;
    cout << "\n\n\t\tRaiz Cuadrada del Numero"<< endl;
    cout << "\t\t-----------------------------"<< endl;
    cout <<"\n\tIngrese el Numero: ";
    cin >> ingreseNumero;
    cout <<"\n\t-------------------------------------"<< endl;
    if (ingreseNumero < 0){
        cout <<"\n\tNo se puede realizar el calculo ya que el numero es negativo --ERROR--"<<endl;
    }else{
        cout << "\tLa raiz cuadra de "<< ingreseNumero <<" es = "<<sqrt(ingreseNumero)<<endl;
    }
    system ("pause > nul");
}

void menuOperacionesBasicas(){
    int opciones; //capturar la opcion que requira
    bool repetir = true; //para mantener el ciclo (repecion al regresar al menu)
    do{
        system("cls");
        cout << "\n\n\t\tMenu Operaciones Basicas"<< endl;
        cout << "\t\t-----------------------------"<< endl;
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
            repetir = false;
            break;
        }
    }while(repetir);

}




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

