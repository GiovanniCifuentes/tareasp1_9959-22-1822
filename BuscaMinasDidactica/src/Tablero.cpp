#include "Config.h"
#include "Tablero.h"
#include <sstream>
#include <iostream>

using namespace std;

// Definición del constructor por defecto
Tablero::Tablero()
{
}
// Definición del constructor con parámetros
Tablero::Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador)
{
    this->alturaTablero = alturaTablero;
    this->anchoTablero = anchoTablero;
    this->modoDesarrollador = modoDesarrollador;
    //this->numVidas = numVidas;

    // Inicialización del tablero con celdas
    int x, y;
    for (y=0; y < this->alturaTablero; y++)
    {
        vector<Celda> fila;
        for (x=0; x < this->anchoTablero; x++)
        {
            fila.push_back((Celda(x, y, false)));
        }
        this->contenidoTablero.push_back(fila);
    }
}

// Definición de los métodos de acceso para la altura del tablero
int Tablero::getAlturaTablero()
{
    return this->alturaTablero;
}
int Tablero::setAlturaTablero(int alturaTablero)
{
    this->alturaTablero = alturaTablero;
}

// Definición de los métodos de acceso para el ancho del tablero
int Tablero::getAnchoTablero()
{
    return this->anchoTablero;
}
int Tablero::setAnchoTablero(int anchoTablero)
{
    this->anchoTablero = anchoTablero;
}

// Definición de los métodos de acceso para el modo desarrollador
bool Tablero::getModoDesarrollador()
{
    return this->modoDesarrollador;
}
bool Tablero::setModoDesarrollador(bool modoDesarrollador)
{
    this->modoDesarrollador = modoDesarrollador;
}

// Obtener la representación de la mina en la celda en la posición (coordenadaX, coordenadaY)
string Tablero::getRepresentacionMina(int coordenadaX, int coordenadaY)
{
    Celda celdaTemporal = this->contenidoTablero.at(coordenadaY).at(coordenadaX);
    if (celdaTemporal.getMinaDescubierta() || this->modoDesarrollador)
    {
        if (celdaTemporal.getMina())
        {
            // Si la mina está descubierta o estamos en modo desarrollador, se devuelve una "*"
            return "*";
        }
        else
        {
            // Si la mina no está descubierta y no estamos en modo desarrollador,
            // se devuelve la cantidad de minas cercanas como un string
            int cantidadCelda=this->minasCercanas(coordenadaY,coordenadaX);
            string cantidadCeldaString = " ";
            stringstream ss;
            ss << cantidadCelda;
            ss >> cantidadCeldaString;
            return cantidadCeldaString;
        }
    }
    else
    {
        // Si la mina no está descubierta y no estamos en modo desarrollador, se devuelve un "?"
        return "?";
    }
}

int Tablero::minasCercanas(int filaTablero, int columnaTablero)
{
        int contadorTablero = 0;
        int filaInicioTablero, filaFinTablero, columnaInicioTablero, columnaFinTablero;

        // Determinar los límites del área alrededor de la celda especificada
        if (filaTablero <= 0)
        {
            filaInicioTablero = 0;
        }
        else
        {
            filaInicioTablero = filaTablero - 1;
        }

        if (filaTablero + 1 >= this->alturaTablero)
        {
            filaFinTablero = this->alturaTablero - 1;
        }
        else
        {
            filaFinTablero = filaTablero + 1;
        }

        if (columnaTablero <= 0)
        {
            columnaInicioTablero = 0;
        }
        else
        {
            columnaInicioTablero = columnaTablero - 1;
        }
        if (columnaTablero + 1 >= this->anchoTablero)
        {
            columnaFinTablero = this->anchoTablero - 1;
        }
        else
        {
            columnaFinTablero = columnaTablero + 1;
        }

        // Iterar sobre el área alrededor de la celda especificada y contar el número de minas cercanas
        int m;
        for (m = filaInicioTablero; m <= filaFinTablero; m++)
        {
            int l;
            for (l = columnaInicioTablero; l <= columnaFinTablero; l++)
            {
                if (this->contenidoTablero.at(m).at(l).getMina())
                {
                    contadorTablero++;
                }
            }
        }
        return contadorTablero;
}

void Tablero::imprimirSeparadorEncabezado()
{
    // Imprimir un separador de encabezado para separar las filas en la consola
    int m;
    for (m = 0; m <= this->anchoTablero; m++)
    {
        cout << "----";
        if (m + 2 == this->anchoTablero)
        {
            cout << "-";
        }
    }
    cout << "\n";
}


void Tablero::imprimirSeparadorFilas()
{
    // Itera a través de cada columna de la fila actual y agrega el separador correspondiente
    for (int m = 0; m <= this->anchoTablero; m++)
    {
        if (m <= 1)
        {
            cout << "|---"; // Si es la primera o segunda columna, se agrega un separador de borde izquierdo
        }
        else
        {
            cout << "+---"; // Para cualquier otra columna, se agrega un separador que indica la intersección de dos bordes
        }

        // Agrega un separador de borde derecho para la última columna
        if (m == this->anchoTablero)
        {
            cout << "+";
        }
    }
    cout << "\n";
}
/*Tablero::Tablero(Config config, int vidaTablero)
{
    this->vidaTablero = vidaTablero;
}*/

void Tablero::imprimirEncabezado()
{
    //int numVidas = config.getvidaTablero();
    // Agrega un separador de borde superior
    this->imprimirSeparadorEncabezado();

    //cout << "Vidas del Jugador: " << numVidas << endl;

    // Agrega los números de columna correspondientes a cada columna del tablero
    cout << "|   ";
    for (int l = 0; l < this->anchoTablero; l++)
    {
        cout << "| " << l + 1 << " ";
        if (l + 1 == this->anchoTablero)
        {
            cout << "|";
        }
    }
    cout << "\n";


}

void Tablero::imprimir()
{
    // Agrega el encabezado del tablero
    this->imprimirEncabezado();

    // Agrega un separador de borde inferior para el encabezado
    this->imprimirSeparadorEncabezado();

    // Itera a través de cada fila del tablero
    for (int y = 0; y < this->alturaTablero; y++)
    {
        // Agrega el número de fila correspondiente a la fila actual
        cout << "| " << y + 1 << " ";

        // Itera a través de cada columna de la fila actual y agrega la representación de la celda correspondiente
        for (int x = 0; x < this->anchoTablero; x++)
        {
            cout << "| " << this->getRepresentacionMina(x, y) << " ";
            if (x + 1 == this->anchoTablero)
            {
                cout << "|";
            }
        }
        cout << "\n";

        // Agrega un separador de borde inferior para la fila actual
        this->imprimirSeparadorFilas();
    }
}

bool Tablero::colocarMina(int x, int y)
{
    // Establece la celda correspondiente en la posición (x, y) como una mina
    return this->contenidoTablero.at(y).at(x).setMina(true);
}

bool Tablero::descubrirMina(int x, int y)
{
    // Establece la celda correspondiente en la posición (x, y) como descubierta
    this->contenidoTablero.at(y).at(x).setMinaDescubierta(true);

    // Obtiene la celda correspondiente en la posición (x, y)
    Celda celda = this->contenidoTablero.at(y).at(x);

    // Si la celda es una mina, devuelve falso
    if (celda.getMina())
    {
        return false;
    }
    // Si la celda no es una mina, devuelve verdadero
		return true;
	}

	//Cuenta el número de celdas en el tablero que no han sido descubiertas y que no contienen una mina.
	int Tablero::contarCeldasSinMinasYSinDescubrir()
	{
		int x, y, contador = 0;
		for (y = 0; y < this->alturaTablero; y++)
		{
			for (x = 0; x < this->anchoTablero; x++)
			{
				Celda celdaTemporal = this->contenidoTablero.at(y).at(x);
				if (!celdaTemporal.getMinaDescubierta() && !celdaTemporal.getMina())
				{
					contador++;
				}
			}
		}
		//Devuelve el número de celdas sin descubrir y sin minas en el tablero.
		return contador;
	}

/*int Tablero::getVidas()
{
    return numVidas;
}

void Tablero::setVidas(int numVidas)
{
    this->numVidas = numVidas;
}*/
