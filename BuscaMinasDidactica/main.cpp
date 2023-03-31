#include <iostream>
#include <unistd.h>
#include "Juego.h"
#include "Config.h"

using namespace std;

int main()
{
    // Definición de constantes que se utilizarán en el juego
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3;

    // Creación de un objeto Config para almacenar la configuración del juego
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);


    // Inicialización de la semilla de generación de números aleatorios
    srand(getpid());

    // Variables para almacenar la selección del usuario y controlar el flujo del menú
    int opciones;
    bool repetir = true;

    do
    {
        // Limpia la pantalla
        system("cls");

        // Muestra el menú
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t---------------------" << endl;
        cout << "\t\t1. Configuracion del Juego" << endl;
        cout << "\t\t2. Iniciar el juego" << endl;
        cout << "\t\t3. Salir del Menu" << endl;
        cout << "\n\t\tIngrese una opcion: ";

        // Lee la selección del usuario5
        cin >> opciones;

        // Ejecuta la acción correspondiente según la selección del usuario
        switch (opciones)
        {
        case 1:
            {
                // Abre el menú de configuración y actualiza la configuración del juego
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
                // Crea un objeto Juego con el tablero y el número de minas especificados en la configuración del juego
                Juego juego(Tablero(configuracionJuego.getFilasTablero(), configuracionJuego.getColumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());

                // Inicia el juego
                juego.iniciar();

                // Pausa la ejecución del programa para que el usuario pueda ver los resultados
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

