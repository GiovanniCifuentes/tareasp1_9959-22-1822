//autor: Giovanni Cifuentes
//serie 3
//fecha de creacion: 01/03/2023

#include <iostream>
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h> // aqui se encuentra le rand, srand
#include <unistd.h>
#include <string.h>
#include <iomanip> //sirve para formatos de salida

using namespace std;

const int NUMERO_EMPRESAS = 5;
const int NUMERO_FECHAS = 4;
const int MAX_CALIFICACION = 1000000;
const int MIN_CALIFICACION = 0;
const int MAX_LONGITUD_CADENA = 50;

int busquedaAleatorios(int minimo, int maximo);
void llenarMatriz(float matriz1[NUMERO_EMPRESAS][NUMERO_FECHAS+1]);
void llenarMatriz2(float matriz2[NUMERO_EMPRESAS][NUMERO_FECHAS+1]);
void llenarMatriz3(float matriz3[NUMERO_EMPRESAS][NUMERO_FECHAS+1]);
void imprimirLineaMatriz();
void imprimirMatriz1(float matriz[NUMERO_EMPRESAS][NUMERO_FECHAS+1], char camara1[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA]);
void imprimirMatriz2(float matriz2[NUMERO_EMPRESAS][NUMERO_FECHAS+1], char camara2[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA]);
void imprimirMatriz3(float matriz2[NUMERO_EMPRESAS][NUMERO_FECHAS+1], char camara3[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA]);

int main()
{
    char opcion;
    //le agrege la funcion para que se repita (lo hice al tiempo)
    do{
<<<<<<< HEAD
    system("cls");
    srand(getpid());
    cout << "\nCamaras de la Industia"<< endl;
    float matriz1[NUMERO_EMPRESAS][NUMERO_FECHAS+1];
    char camara1[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA] = {"Axis Communications     ", "Hikvision               ", "Bosch Security Systems  ", "Honeywell Security      ","Avigilon                "};
    llenarMatriz(matriz1);
    imprimirMatriz1(matriz1, camara1);
    float totalMonto1 = 0;
    for (int y = 0; y < NUMERO_EMPRESAS; y++)
    {
    totalMonto1 += matriz1[y][NUMERO_FECHAS];
    }
    float promedioMonto1 = totalMonto1 / NUMERO_EMPRESAS;
    cout << "\nEl promedio total para la Camara de la Industria es: " << promedioMonto1 << endl;
    cout << "\n----------------------------------------------------------------------------------------------------------------------------------------"<<endl;

    cout << "\nCamaras de la Construccion"<< endl;
    float matriz2[NUMERO_EMPRESAS][NUMERO_FECHAS+1];
    char camara2[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA] = {"Bechtel                 ", "Vinci                   ", "ACS                     ", "Fluor Corporation       ","China Engineering       "};
    llenarMatriz2(matriz2);
    imprimirMatriz2(matriz2, camara2);
    float totalMonto2 = 0;
    for (int y = 0; y < NUMERO_EMPRESAS; y++)
    {
    totalMonto2 += matriz2[y][NUMERO_FECHAS];
    }
    float promedioMonto2 = totalMonto2 / NUMERO_EMPRESAS;
    cout << "\nEl promedio total para la Camara de la Construccion es: " << promedioMonto2 << endl;
    cout << "\n----------------------------------------------------------------------------------------------------------------------------------------"<<endl;

    cout << "\nCamaras de Trasporte"<< endl;
    float matriz3[NUMERO_EMPRESAS][NUMERO_FECHAS+1];
    char camara3[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA] = {"FedEx                   ", "Maersk                  ", "DHL                     ", "Delta Air Lines         ","Uber                    "};
    llenarMatriz3(matriz3);
    imprimirMatriz3(matriz3, camara3);
    float totalMonto3 = 0;
    for (int y = 0; y < NUMERO_EMPRESAS; y++)
    {
    totalMonto3 += matriz3[y][NUMERO_FECHAS];
    }
    float promedioMonto3= totalMonto3 / NUMERO_EMPRESAS;
    cout << "\nEl promedio total para la Camara de Transporte es: " << promedioMonto3 << endl;
    cout << "\n----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    if (promedioMonto1 > promedioMonto2 && promedioMonto1 > promedioMonto3)
    {
        cout << "\n LA MEJOR CAMARA ES: CAMARA DE LA INDUSTRIA, CON UN PROMEDIO DE: "<< promedioMonto1 <<"!!!\n"<< endl;
    }else if (promedioMonto2 > promedioMonto1 && promedioMonto2 > promedioMonto1)
    {
        cout << "\n LA MEJOR CAMARA ES: CAMARA DE LA CONSTRUCCION, CON UN PROMEDIO DE: "<< promedioMonto2 <<"!!!\n" <<endl;
    }else
    {
        cout << "\n LA MEJOR CAMARA ES: CAMARA DE TRANSPORTE, CON UN PROMEDIO DE: "<< promedioMonto3 <<"!!!" <<endl;
    }
    cout << "\n----------------------------------------------------------------------------------------------------------------------------------------"<<endl;
=======
    srand(getpid());
    float matriz[NUMERO_CAMARAS][NUMERO_FECHAS+1];
    char camara[NUMERO_CAMARAS][MAX_LONGITUD_CADENA] = {" Cámara  de  la  Construcción      ", "Cámara  de  Industria       ", "Cámara  de TRANSPORTE", "Cámara  de TRANSPORTE","Cámara  de TRANSPORTE"};
    llenarMatriz(matriz);
    imprimirMatriz(matriz, camara);
>>>>>>> 21bbeb6963323cc16b0a634b93ad813a339ffdc4
    cout << " "<< endl;
     cout << "Deseas realizar otra operacion? escribir s si Si, o n si No"<<endl;
    cin >> opcion;
    }while (opcion == 's');//ciclo para repetir otravez el codigo
    cout << " "<< endl;
    cout << "No se realizara ninguna operacion mas"<< endl;
<<<<<<< HEAD
    system ("pause > nul");
=======
>>>>>>> 21bbeb6963323cc16b0a634b93ad813a339ffdc4
    return 0;
}
int busquedaAleatorios(int minimo, int maximo)
{
    return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}
void llenarMatriz(float matriz1[NUMERO_EMPRESAS][NUMERO_FECHAS+1])
{
    for (int y=0; y < NUMERO_EMPRESAS; y++)
    {
        float sumaNotas = 0;
        for (int x=0; x < NUMERO_FECHAS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            sumaNotas += (float)calificacion;
            matriz1[y][x] = calificacion;
        }
        float montoNotas = sumaNotas;
        matriz1[y][NUMERO_FECHAS]=montoNotas;
    }
}
void llenarMatriz2(float matriz2[NUMERO_EMPRESAS][NUMERO_FECHAS+1])
{
    for (int y=0; y < NUMERO_EMPRESAS; y++)
    {
        float sumaNotas = 0;
        for (int x=0; x < NUMERO_FECHAS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            sumaNotas += (float)calificacion;
            matriz2[y][x] = calificacion;
        }
        float montoNotas = sumaNotas;
        matriz2[y][NUMERO_FECHAS]=montoNotas;
    }
}
void llenarMatriz3(float matriz3[NUMERO_EMPRESAS][NUMERO_FECHAS+1])
{
    for (int y=0; y < NUMERO_EMPRESAS; y++)
    {
        float sumaNotas = 0;
        for (int x=0; x < NUMERO_FECHAS; x++)
        {
            int calificacion = busquedaAleatorios(MIN_CALIFICACION, MAX_CALIFICACION);
            sumaNotas += (float)calificacion;
            matriz3[y][x] = calificacion;
        }
        float montoNotas = sumaNotas;
        matriz3[y][NUMERO_FECHAS]=montoNotas;
    }
}
void imprimirLineaMatriz()
{
    cout<<"+--------------";
    for (int x=0; x < NUMERO_FECHAS + 1; x++)
    {
        cout<<"--------------------";
    }
    cout<<"+\n";
}
<<<<<<< HEAD
void imprimirMatriz1(float matriz1[NUMERO_EMPRESAS][NUMERO_FECHAS+1], char camara1[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA])
{
    int y, x;
    float montoMayor = matriz1[0][NUMERO_FECHAS];
    float montoMenor = matriz1[0][NUMERO_FECHAS];
    char MontoMayor[MAX_LONGITUD_CADENA];
    char MontoMenor[MAX_LONGITUD_CADENA];
    memcpy(MontoMayor, camara1[0], MAX_LONGITUD_CADENA);
    memcpy(MontoMenor, camara1[0], MAX_LONGITUD_CADENA);
=======
void imprimirMatriz(float matriz[NUMERO_CAMARAS][NUMERO_FECHAS+1], char camaras[NUMERO_CAMARAS][MAX_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_FECHAS];
    float promedioMenor = matriz[0][NUMERO_FECHAS];
    char PromedioMayor[MAX_LONGITUD_CADENA];
    char PromedioMenor[MAX_LONGITUD_CADENA];
    memcpy(PromedioMayor, camaras[0], MAX_LONGITUD_CADENA);
    memcpy(PromedioMenor, camaras[0], MAX_LONGITUD_CADENA);
>>>>>>> 21bbeb6963323cc16b0a634b93ad813a339ffdc4
    imprimirLineaMatriz();
    cout<<"|          Empresas             |";
    for (int x=0; x < NUMERO_FECHAS; x++)
    {
        cout<<"     201"<< (int) x + 5<<"     |";
    }
    cout<<"       Monto Total     |\n";
    imprimirLineaMatriz();
    for (int y=0; y <NUMERO_EMPRESAS; y++)
    {
<<<<<<< HEAD
        cout<<"|    "<<camara1[y]<<"   |";
=======
        cout<<"|    "<<camaras[y]<<"   |";
>>>>>>> 21bbeb6963323cc16b0a634b93ad813a339ffdc4
        float suma = 0;
        for (int x=0; x < NUMERO_FECHAS; x++)
            {
                int calificacion = matriz1[y][x];
                cout<<"\t"<<calificacion<<"   |";
            }
        float monto = matriz1[y][NUMERO_FECHAS];
        if (monto > montoMayor)
        {
<<<<<<< HEAD
            montoMayor = monto;
            memcpy(MontoMayor, camara1[y], MAX_LONGITUD_CADENA);
=======
            promedioMayor = promedio;
            memcpy(PromedioMayor, camaras[y], MAX_LONGITUD_CADENA);
>>>>>>> 21bbeb6963323cc16b0a634b93ad813a339ffdc4
        }
        if (monto < montoMayor)
        {
<<<<<<< HEAD
            montoMayor = monto;
            memcpy(MontoMayor, camara1[y], MAX_LONGITUD_CADENA);
=======
            promedioMenor = promedio;
            memcpy(PromedioMenor, camaras[y], MAX_LONGITUD_CADENA);
>>>>>>> 21bbeb6963323cc16b0a634b93ad813a339ffdc4
        }
        cout<<"\t"<< fixed << setprecision(2)<< (double) monto<<"  |\n";
        imprimirLineaMatriz();
    }
<<<<<<< HEAD
    cout<<"Monto mayor de la empresa: "<<MontoMayor<<" con " <<montoMayor<<"\n";
    cout<<"Monto menor de la empresa: "<<MontoMenor<<" con " <<montoMenor<<"\n";
}
void imprimirMatriz2(float matriz2[NUMERO_EMPRESAS][NUMERO_FECHAS+1], char camara2[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA])
{
    int y, x;
    float montoMayor = matriz2[0][NUMERO_FECHAS];
    float montoMenor = matriz2[0][NUMERO_FECHAS];
    char MontoMayor[MAX_LONGITUD_CADENA];
    char MontoMenor[MAX_LONGITUD_CADENA];
    memcpy(MontoMayor, camara2[0], MAX_LONGITUD_CADENA);
    memcpy(MontoMenor, camara2[0], MAX_LONGITUD_CADENA);
    imprimirLineaMatriz();
    cout<<"|          Empresas             |";
    for (int x=0; x < NUMERO_FECHAS; x++)
    {
        cout<<"     201"<< (int) x + 5<<"     |";
    }
    cout<<"       Monto Total     |\n";
    imprimirLineaMatriz();
    for (int y=0; y <NUMERO_EMPRESAS; y++)
    {
        cout<<"|    "<<camara2[y]<<"   |";
        float suma = 0;
        for (int x=0; x < NUMERO_FECHAS; x++)
            {
                int calificacion = matriz2[y][x];
                cout<<"\t"<<calificacion<<"   |";
            }
        float monto = matriz2[y][NUMERO_FECHAS];
        if (monto > montoMayor)
        {
            montoMayor = monto;
            memcpy(MontoMayor, camara2[y], MAX_LONGITUD_CADENA);
        }
        if (monto < montoMayor)
        {
            montoMayor = monto;
            memcpy(MontoMayor, camara2[y], MAX_LONGITUD_CADENA);
        }
        cout<<"\t"<< fixed << setprecision(2)<< (double) monto<<"  |\n";
        imprimirLineaMatriz();
    }
    cout<<"Monto mayor de la empresa: "<<MontoMayor<<" con " <<montoMayor<<"\n";
    cout<<"Monto menor de la empresa: "<<MontoMenor<<" con " <<montoMenor<<"\n";
}
void imprimirMatriz3(float matriz3[NUMERO_EMPRESAS][NUMERO_FECHAS+1], char camara3[NUMERO_EMPRESAS][MAX_LONGITUD_CADENA])
{
    int y, x;
    float montoMayor = matriz3[0][NUMERO_FECHAS];
    float montoMenor = matriz3[0][NUMERO_FECHAS];
    char MontoMayor[MAX_LONGITUD_CADENA];
    char MontoMenor[MAX_LONGITUD_CADENA];
    memcpy(MontoMayor, camara3[0], MAX_LONGITUD_CADENA);
    memcpy(MontoMenor, camara3[0], MAX_LONGITUD_CADENA);
    imprimirLineaMatriz();
    cout<<"|          Empresas             |";
    for (int x=0; x < NUMERO_FECHAS; x++)
    {
        cout<<"     201"<< (int) x + 5<<"     |";
    }
    cout<<"       Monto Total     |\n";
    imprimirLineaMatriz();
    for (int y=0; y <NUMERO_EMPRESAS; y++)
    {
        cout<<"|    "<<camara3[y]<<"   |";
        float suma = 0;
        for (int x=0; x < NUMERO_FECHAS; x++)
            {
                int calificacion = matriz3[y][x];
                cout<<"\t"<<calificacion<<"   |";
            }
        float monto = matriz3[y][NUMERO_FECHAS];
        if (monto > montoMayor)
        {
            montoMayor = monto;
            memcpy(MontoMayor, camara3[y], MAX_LONGITUD_CADENA);
        }
        if (monto < montoMayor)
        {
            montoMayor = monto;
            memcpy(MontoMayor, camara3[y], MAX_LONGITUD_CADENA);
        }
        cout<<"\t"<< fixed << setprecision(2)<< (double) monto<<"  |\n";
        imprimirLineaMatriz();
    }

    cout<<"Monto mayor de la empresa: "<<MontoMayor<<" con " <<montoMayor<<"\n";
    cout<<"Monto menor de la empresa: "<<MontoMenor<<" con " <<montoMenor<<"\n";
=======
    cout<<"Promedio mayor: "<<PromedioMayor<<" con " <<promedioMayor<<"\n";
    cout<<"Promedio menor: "<<PromedioMenor<<" con " <<promedioMenor<<"\n";
>>>>>>> 21bbeb6963323cc16b0a634b93ad813a339ffdc4
}
