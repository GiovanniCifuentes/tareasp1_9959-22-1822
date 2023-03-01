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
    char opcion;
    //le agrege la funcion para que se repita (lo hice al tiempo)
    do{
    srand(getpid());
    float matriz[NUMERO_CAMARAS][NUMERO_FECHAS+1];
    char camara[NUMERO_CAMARAS][MAX_LONGITUD_CADENA] = {" Cámara  de  la  Construcción      ", "Cámara  de  Industria       ", "Cámara  de TRANSPORTE", "Cámara  de TRANSPORTE","Cámara  de TRANSPORTE"};
    llenarMatriz(matriz);
    imprimirMatriz(matriz, camara);
    cout << " "<< endl;
     cout << "Deseas realizar otra operacion? escribir s si Si, o n si No"<<endl;
    cin >> opcion;
    }while (opcion == 's');//ciclo para repetir otravez el codigo
    cout << " "<< endl;
    cout << "No se realizara ninguna operacion mas"<< endl;
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
void imprimirMatriz(float matriz[NUMERO_CAMARAS][NUMERO_FECHAS+1], char camaras[NUMERO_CAMARAS][MAX_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_FECHAS];
    float promedioMenor = matriz[0][NUMERO_FECHAS];
    char PromedioMayor[MAX_LONGITUD_CADENA];
    char PromedioMenor[MAX_LONGITUD_CADENA];
    memcpy(PromedioMayor, camaras[0], MAX_LONGITUD_CADENA);
    memcpy(PromedioMenor, camaras[0], MAX_LONGITUD_CADENA);
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
        cout<<"|    "<<camaras[y]<<"   |";
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
            memcpy(PromedioMayor, camaras[y], MAX_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(PromedioMenor, camaras[y], MAX_LONGITUD_CADENA);
        }
        cout<<"\t"<< fixed << setprecision(2)<< (double) promedio<<"  |\n";
        imprimirLineaMatriz();
    }
    cout<<"Promedio mayor: "<<PromedioMayor<<" con " <<promedioMayor<<"\n";
    cout<<"Promedio menor: "<<PromedioMenor<<" con " <<promedioMenor<<"\n";
}
