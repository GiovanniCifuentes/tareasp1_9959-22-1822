//autor: Giovanni Cifuentes
//serie 3
//fecha de creacion: 01/03/2023

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <iomanip>

using namespace std;

const int NUMERO_CAMARAS = 5;
const int NUMERO_FECHAS = 5;
const int MAX_CALIFICACION = 50;
const int MIN_CALIFICACION = 10;
const int MAX_LONGITUD_CADENA = 50;

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz[NUMERO_CAMARAS][NUMERO_FECHAS+1]);
void imprimirLineaMatriz();
void imprimirMatriz(float matriz[NUMERO_CAMARAS][NUMERO_FECHAS+1], char ligas[NUMERO_CAMARAS][MAX_LONGITUD_CADENA]);

int main()
{
    srand(getpid());
    float matriz[NUMERO_CAMARAS][NUMERO_FECHAS+1];
    char camara[NUMERO_CAMARAS][MAX_LONGITUD_CADENA] = {" C�mara  de  la  Construcci�n      ", "C�mara  de  Industria       ", "C�mara  de TRANSPORTE", "C�mara  de TRANSPORTE","C�mara  de TRANSPORTE"};
    llenarMatriz(matriz);
    imprimirMatriz(matriz, camara);
    return 0;
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void llenarMatriz(float matriz[NUMERO_CAMARAS][NUMERO_FECHAS+1])
{
    for (int y=0; y < NUMERO_CAMARAS; y++)
    {
        float sumaNotas = 0;
        for (int x=0; x < NUMERO_FECHAS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            sumaNotas += (float)calificacion;
            matriz[y][x] = calificacion;
        }
        float promedioNotas = sumaNotas / NUMERO_FECHAS;
        matriz[y][NUMERO_FECHAS]=promedioNotas;
    }
}
void imprimirLineaMatriz()
{
    cout<<"+------";
    for (int x=0; x < NUMERO_FECHAS + 1; x++)
    {
        cout<<"------------";
    }
    cout<<"+\n";
}
void imprimirMatriz(float matriz[NUMERO_CAMARAS][NUMERO_FECHAS+1], char ligas[NUMERO_CAMARAS][MAX_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_FECHAS];
    float promedioMenor = matriz[0][NUMERO_FECHAS];
    char ligaPromedioMayor[MAX_LONGITUD_CADENA];
    char ligaPromedioMenor[MAX_LONGITUD_CADENA];
    memcpy(ligaPromedioMayor, ligas[0], MAX_LONGITUD_CADENA);
    memcpy(ligaPromedioMenor, ligas[0], MAX_LONGITUD_CADENA);
    imprimirLineaMatriz();
    cout<<"|            CAMARAS           |";
    for (int x=0; x < NUMERO_FECHAS; x++)
    {
        cout<<" 201"<< (int) x + 1<<"  |";
    }
    cout<<"Promedio|\n";
    imprimirLineaMatriz();
    for (int y=0; y <NUMERO_CAMARAS; y++)
    {
        cout<<"|    "<<ligas[y]<<"   |";
        float suma = 0;
        for (int x=0; x < NUMERO_FECHAS; x++)
            {
                int calificacion = matriz[y][x];
                cout<<"\t"<<calificacion<<"    |";
            }
        float promedio = matriz[y][NUMERO_FECHAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(ligaPromedioMayor, ligas[y], MAX_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(ligaPromedioMenor, ligas[y], MAX_LONGITUD_CADENA);
        }
        cout<<"\t"<< fixed << setprecision(2)<< (double) promedio<<"  |\n";
        imprimirLineaMatriz();
    }
    cout<<"Promedio mayor: "<<ligaPromedioMayor<<" con " <<promedioMayor<<"\n";
    cout<<"Promedio menor: "<<ligaPromedioMenor<<" con " <<promedioMenor<<"\n";
}
