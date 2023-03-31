#include "Juego.h"
#include "Config.h"
#include <iostream>

using namespace std;

// Retorna un número aleatorio en el rango [minimo, maximo].
int Juego::aleatorio_en_rango(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

// Retorna una fila aleatoria en el rango [0, filas-1] del tablero.
int Juego::filaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAlturaTablero() - 1);
}

// Retorna una columna aleatoria en el rango [0, columnas-1] del tablero.
int Juego::columnaAleatoria()
{
    return this->aleatorio_en_rango(0, this->tablero.getAnchoTablero() - 1);
}

// Constructor que recibe un objeto Tablero y la cantidad de minas que se colocarán.
Juego::Juego(Tablero tablero, int cantidadMinas)
{
    this->tablero = tablero;
    this->cantidadMinas = cantidadMinas;
    this->colocarMinasAleatoriamente();

}

// Coloca las minas en el tablero de manera aleatoria.
void Juego::colocarMinasAleatoriamente()
{
    int x, y, minasColocadas = 0;

    while (minasColocadas < this->cantidadMinas)
    {
        // Obtiene una posición aleatoria para colocar una mina
        x = this->columnaAleatoria();
        y = this->filaAleatoria();

        // Intenta colocar una mina en la posición aleatoria. Si ya había una mina en esa posición, no se coloca.
        if (this->tablero.colocarMina(x, y))
        {
            minasColocadas++;
        }
    }
}

int Juego::solicitarFilaUsuario()
{
    // Pide al usuario que ingrese la fila en la que desea jugar.
    int fila = 0;
    cout << "Ingresa la FILA en la que desea jugar: ";
    cin >> fila;

    // Retorna la fila ingresada menos 1, ya que los índices del tablero comienzan en 0.
    return fila - 1;
}

int Juego::solicitarColumnaUsuario()
{
    // Pide al usuario que ingrese la columna en la que desea jugar.
    int columna = 0;
    cout << "Ingresa la COLUMNA en la que desea jugar: ";
    cin >> columna;

    // Retorna la columna ingresada menos 1, ya que los índices del tablero comienzan en 0.
    return columna - 1;
}

bool Juego::jugadorGana()
{
    // Cuenta el número de celdas que no tienen minas y que aún no han sido descubiertas.
    int conteo = this->tablero.contarCeldasSinMinasYSinDescubrir();

    // Si todas las celdas sin minas están descubiertas, el jugador ha ganado.
    if (conteo == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


void Juego::iniciar()
{
    int fila, columna;
    /*int vida;
    totalVidas = vida;*/

    // Ciclo principal del juego.
    while (true)
    {
        // Imprime el estado actual del tablero.
        this->tablero.imprimir();

        // Pide al usuario que ingrese una fila y columna para descubrir.
        fila = this->solicitarFilaUsuario();
        columna = this->solicitarColumnaUsuario();

        // Descubre la celda seleccionada por el usuario y guarda la respuesta en respuestaAUsuario.
        bool respuestaAUsuario = this->tablero.descubrirMina(columna, fila);

        // Si el usuario hizo clic en una celda con una mina, pierde una vida.
        /*if (!respuestaAUsuario)
        {
            cout << "\n";
            totalVidas--;
            cout << "Perdiste una vida, tienes: " << totalVidas << "\n";

            if (totalVidas == -(numVidas)) {
                cout << "Juego terminado. Perdiste.\n";
                this->tablero.setModoDesarrollador(true);
            }
        }

        // Si el jugador ha ganado el juego, se imprime un mensaje de victoria y se sale del ciclo.
        if (this->jugadorGana())
        {
            cout << "Ganaste el Juego\n";
            this->tablero.setModoDesarrollador(true);
            this->tablero.imprimir();
            break;
        }*/
        if (!respuestaAUsuario)
			{
				cout << "Perdiste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}

			if (this->jugadorGana())
			{
				cout << "Ganaste el Juego\n";
				this->tablero.setModoDesarrollador(true);
				this->tablero.imprimir();
				break;
			}
    }
}

/*int Juego::getVidas()
{
    return numVidas;
}

void Juego::setVidas(int numVidas)
{
    this->numVidas = numVidas;
}*/
