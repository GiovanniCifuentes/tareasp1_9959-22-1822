#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Funciones prototipo
unsigned int tirarDados();
void jugarCraps(int &saldoBanco);

int main()
{
    int saldoBanco = 1000;
    cout << "Bienvenido al juego de Craps. Tu saldo actual es de $" << saldoBanco << endl;

    // Pedir al jugador que introduzca una apuesta
    int apuesta = 0;
    do
    {
        cout << "Introduce tu apuesta: ";
        cin >> apuesta;
    } while (apuesta <= 0 || apuesta > saldoBanco);

    // Jugar Craps
    jugarCraps(saldoBanco);

    // Imprimir saldo final
    cout << "Tu saldo final es de $" << saldoBanco << endl;
    if (saldoBanco == 0)
    {
        cout << "Lo siento. Se quedo sin fondos!" << endl;
    }

    return 0;
}

void jugarCraps(int &saldoBanco)
{
    enum Estado { CONTINUAR, GANO, PERDIO };
    srand(static_cast<unsigned int>(time(0)));

    unsigned int miPunto = 0;
    Estado estadoJuego = CONTINUAR;
    unsigned int sumaDeDados = tirarDados();

    switch (sumaDeDados)
    {
        case 7:
        case 11:
            estadoJuego = GANO;
            break;
        case 2:
        case 3:
        case 12:
            estadoJuego = PERDIO;
            break;
        default:
            estadoJuego = CONTINUAR;
            miPunto = sumaDeDados;
            cout << "El punto es " << miPunto << endl;
            break;
    }

    while (estadoJuego == CONTINUAR)
    {
        sumaDeDados = tirarDados();

        if (sumaDeDados == miPunto)
        {
            estadoJuego = GANO;
        }
        else if (sumaDeDados == 7)
        {
            estadoJuego = PERDIO;
        }
    }

    int apuesta;

    if (estadoJuego == GANO)
    {
        saldoBanco += apuesta;
        cout << "El jugador gana! Tu nuevo saldo es de $" << saldoBanco << endl;
    }
    else
    {
        saldoBanco -= apuesta;
        cout << "El jugador pierde! Tu nuevo saldo es de $" << saldoBanco << endl;
        if (saldoBanco == 0)
        {
            cout << "Lo siento. Se quedo sin fondos!" << endl;
        }
    }
}

unsigned int tirarDados()
{
    unsigned int dado1 = 1 + rand() % 6;
    unsigned int dado2 = 1 + rand() % 6;
    unsigned int suma = dado1 + dado2;

    cout << "El jugador tiro " << dado1 << " + " << dado2 << " = " << suma << endl;

    return suma;
}
