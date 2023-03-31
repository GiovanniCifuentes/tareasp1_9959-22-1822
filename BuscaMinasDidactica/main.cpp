#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"

using namespace std;

int main()
{
    // Definici�n de constantes que se utilizar�n en el juego
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3;

    // Creaci�n de un objeto Config para almacenar la configuraci�n del juego
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);


    // Inicializaci�n de la semilla de generaci�n de n�meros aleatorios
    srand(getpid());

    // Variables para almacenar la selecci�n del usuario y controlar el flujo del men�
    int opciones;
    bool repetir = true;

    do
    {
        // Limpia la pantalla
        system("cls");

        // Muestra el men�
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t---------------------" << endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el juego" << endl;
        cout << "\t\t3. Salir del Menu" << endl;
        cout << "\n\t\tIngrese una opcion: ";

        // Lee la selecci�n del usuario5
        cin >> opciones;

        // Ejecuta la acci�n correspondiente seg�n la selecci�n del usuario
        switch (opciones)
        {
        case 1:
            {
                // Abre el men� de configuraci�n y actualiza la configuraci�n del juego
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
                // Crea un objeto Juego con el tablero y el n�mero de minas especificados en la configuraci�n del juego
                Juego juego(Tablero(configuracionJuego.getFilasTablero(), configuracionJuego.getColumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());

                // Inicia el juego
                juego.iniciar();

                // Pausa la ejecuci�n del programa para que el usuario pueda ver los resultados
                system("pause");
                break;
            }
        case 3:
            repetir = false;
            break;
        }
    }while(repetir);

    // Indica que el programa se ha ejecutado correctamente
    return 0;
}

