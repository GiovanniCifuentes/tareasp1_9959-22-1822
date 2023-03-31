#include <iostream>
#include <unistd.h>
#include "Config.h"

using namespace std;

// Definición del constructor de la clase Config
Config::Config(int filasTablero, int columnasTablero, int minasTablero, bool mododesarrolladorTablero, int vidaTablero)
{
    // Asignación de los valores iniciales para las variables miembro
    this->filasTablero = filasTablero;
    this->columnasTablero = columnasTablero;
    this->minasTablero = minasTablero;
    this->mododesarrolladorTablero = mododesarrolladorTablero;
    this->vidaTablero = vidaTablero;
}

// Definición de la función menuConfiguracion de la clase Config
void Config::menuConfiguracion()
{
    srand(getpid());
    int opciones;
    int valorIngresado;
    bool repetir = true;

    do
    {
        system("cls");
        cout << "\n\n\t\tCONFIGURACION ACTUAL -Menu-" << endl;
        cout << "\t\t---------------------" << endl;
        cout << "\t\t1. Filas del Tablero = " << this-> getFilasTablero() << endl;
        cout << "\t\t2. Columnas del Tablero = " << this-> getColumnasTablero() << endl;
        cout << "\t\t3. Minas del Tablero = " << this-> getminasTablero() << endl;
        cout << "\t\t4. Modo del Juego = " << this-> getmodoDesarrolladorTablero() << endl;
        cout << "\t\t5. Vidas del Jugador = " << this-> getvidaTablero() << endl;
        cout << "\t\t6. Retornar al menu general" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        if (opciones != 6)
        {
            cout << "\n\tIngrese el valor que desea cambiar: ";
            cin >> valorIngresado;
        }
        switch (opciones)
        {
        case 1:
            {
                // Si la opción elegida es 1, se llama a la función setFilasTablero
                this -> setFilasTablero(valorIngresado);
                cout << "Filas del Tablero Actualizadas" << endl;
                break;
            }
        case 2:
            {
                // Si la opción elegida es 2, se llama a la función setColumnasTablero
                this -> setColumnasTablero(valorIngresado);
                cout << "Columnas del Tablero Actualizadas" << endl;
                break;
            }
        case 3:
            {
                // Si la opción elegida es 3, se llama a la función setminasTablero
                this -> setminasTablero(valorIngresado);
                cout << "Minas del Tablero Actualizadas" << endl;
                break;
            }
        case 4:
            {
                // Si la opción elegida es 4, se llama a la función setmodoDesarrolladorTablero
                this -> setmodoDesarrolladorTablero(valorIngresado);
                cout << "Modo del Jeugo Actualizado" << endl;
                break;
            }
        case 5:
            {
                // Si la opción elegida es 5, se llama a la función setvidaTablero
                this -> setvidaTablero(valorIngresado);
                cout << "Vidas del Jugador Actualizado" << endl;
                break;
            }
        case 6:
            repetir = false;
            break;
        }
        system("pause");
    }while(repetir);
}
// Métodos para obtener y establecer

int Config::getFilasTablero()
{
    return this ->filasTablero;
}
int Config::setFilasTablero(int filasTablero)
{
    return this->filasTablero = filasTablero;
}

int Config::getColumnasTablero()
{
    return this ->columnasTablero;
}
int Config::setColumnasTablero(int columnasTablero)
{
    return this->columnasTablero = columnasTablero;
}

int Config::getminasTablero()
{
    return this ->minasTablero;
}
int Config::setminasTablero(int minasTablero)
{
    return this->minasTablero = minasTablero;
}

bool Config::getmodoDesarrolladorTablero()
{
    return this ->mododesarrolladorTablero;
}
bool Config:: setmodoDesarrolladorTablero(bool mododesarrolladorTablero)
{
    return this->mododesarrolladorTablero = mododesarrolladorTablero;
}

int Config::getvidaTablero()
{
    return this ->vidaTablero;
}
int Config::setvidaTablero(int vidaTablero)
{
    return this->vidaTablero = vidaTablero;
}

