// Este ejemplo pretende mostrar matrices o arreglos bidimencionales en C++
//fecha de Creacion: 15/02/2023

 #include <iostream>
 #include <stdio.h>
 #include <stdlib.h> // aqui se encuentra le rand, srand
 #include <unistd.h>
 #include <string.h>
 #include <iomanip> //sirve para formatos de salida

 using namespace std;

 const int NUMERO_ALUMNOS = 10;
 const int NUMERO_MATERIAS = 5;
 const int MAX_CALIFICACIONES = 100;
 const int MIN_CALIFICACIONES = 0;
 const int MAX_LONGITUD_CADENA = 100;

 int busquedaAleatorios(int minimo, int maximo);
 void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1]);
 void imprimirLineaMatriz();
 void imprimirMatriz (float matriz [NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA]); //hay dos clases de parametros por valor y por punteros

 int main ()
 {
     srand(getpid()); //habilita la funcion de stdlib, cuando utilizo el rand (numero random)
     float matriz [NUMERO_ALUMNOS][NUMERO_MATERIAS+1];//definimos la matriz
     char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA] = {"Diego", "Edgar", "Kathy","Giovanni","Pedro","Mario", "Emily", "Marve","Luisa","Pablo"};
     llenarMatriz(matriz);
     imprimirMatriz(matriz, alumnos);
     return 0;
 }
 int busquedaAleatorios(int minimo, int maximo)
 {
     return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) +1); //saca un numero random de 0 a 100
 }
 void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1]) //llenado de matriz
 {
     for (int y=0; y <  NUMERO_ALUMNOS; y++)
     {
        float sumaNotasAlumno=0;//la suma de todos
        for (int x=0; x < NUMERO_MATERIAS; x++)
        {
           int calificacionAlumno = busquedaAleatorios(MIN_CALIFICACIONES, MAX_CALIFICACIONES);
           sumaNotasAlumno += (float)calificacionAlumno; //el float convierte de entero "int" a flotante
           matriz [y][x] = calificacionAlumno;
        }
        float promedioNotasAlumno = sumaNotasAlumno / NUMERO_MATERIAS;
        matriz [y][NUMERO_MATERIAS]=promedioNotasAlumno;
     }
 }
 void imprimirLineaMatriz()
 {
     cout <<"+----------";
     for (int x=0; x < NUMERO_MATERIAS; x++) //impreme bloques de guiones para llenar la matriz
     {
        cout<<"-------------";
     }
     cout <<"+\n";//despues de usar printf usar un de escape
 }
void imprimirMatriz (float matriz [NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA])
{
    float promedioMayor = matriz[0][NUMERO_MATERIAS]; //matriz
    float promedioMenor = matriz[0][NUMERO_MATERIAS]; //matriz
    char alumnoPromedioMayor [MAX_LONGITUD_CADENA]; //vector
    char alumnoPromedioMenor [MAX_LONGITUD_CADENA]; //vector
    memcpy(alumnoPromedioMayor, alumnos[0], MAX_LONGITUD_CADENA); //hacia donde va "el distino"
    memcpy(alumnoPromedioMenor, alumnos[0], MAX_LONGITUD_CADENA);
    imprimirLineaMatriz();
    cout <<"|  Alumno  |";
    for (int x=0; x < NUMERO_MATERIAS; x++)
    {
        cout<<"Cal  "<< (int) x + 1<<"  |";
    }
    cout <<("promedio|\n");
    imprimirLineaMatriz();
    for (int y=0; y< NUMERO_ALUMNOS; y++)
    {
        cout <<"|  "<<alumnos[y]<<"   |";
        float suma = 0;
        for (int x=0; x< NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz[y][x];
            cout <<"\t"<<calificacion<<"  |";
        }
        float promedio = matriz [y][NUMERO_MATERIAS];
        if (promedio > promedioMayor)
        {
            promedioMayor = promedio;
            memcpy(alumnoPromedioMayor, alumnos[y], MAX_LONGITUD_CADENA);
        }
        if (promedio < promedioMenor)
        {
            promedioMenor = promedio;
            memcpy(alumnoPromedioMenor, alumnos[y], MAX_LONGITUD_CADENA);
        }
        cout<<"\t"<< fixed << setprecision(2)<< (double) promedio<<"    |\n";
        imprimirLineaMatriz();
    }
    cout<<"Promedio mayor: "<<alumnoPromedioMayor<<" con "<<promedioMayor<<"\n";
    cout<<"Promedio menor: "<<alumnoPromedioMenor<<" con "<<promedioMenor<<"\n";
}

