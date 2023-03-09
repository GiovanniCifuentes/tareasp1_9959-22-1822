 // Este ejemplo pretende mostrar el nivel de adaptacion de C a C++, utilizando matrices o arreglos bidimencionales
 //fecha de Creacion: 15/02/2023

 #include <stdio.h> //aqui se encuentra el printf
 #include <stdlib.h> // aqui se encuentra le rand, srand
 #include <unistd.h>
 #include <string.h>

 #define NUMERO_ALUMNOS 3
 #define NUMERO_MATERIAS 3
 #define MAX_CALIFICACIONES 100
 #define MIN_CALIFICACIONES 0
 #define MAX_LONGITUD_CADENA 100
 //nombres de los alumnos

 int busquedaAleatorios(int minimo, int maximo);
 void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1]);
 void imprimirLineaMatriz();
 void imprimirMatriz (float matriz [NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA]); //hay dos clases de parametros por valor y por punteros

 int main ()
 {
     srand(getpid()); //habilita la funcion de stdlib, cuando utilizo el rand (numero rando)
     float matriz [NUMERO_ALUMNOS][NUMERO_MATERIAS+1];//definimos la matriz
     char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA] = {"Mario", "Carlos", "Maris"};
     llenarMatriz(matriz);
     imprimirMatriz(matriz, alumnos);
     return 0;
 }
 int busquedaAleatorios(int minimo, int maximo)
 {
     return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) +1); //saca un numero rando de 0 a 100
 }
 void llenarMatriz(float matriz[NUMERO_ALUMNOS][NUMERO_MATERIAS+1]) //llenado de matriz
 {
     int y, x; //son contadores
     for (y=0; y <  NUMERO_ALUMNOS; y++)
     {
        float sumaNotasAlumno=0;//la suma de todos
        for (x=0; x < NUMERO_MATERIAS; x++)
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
     int x;
     printf("+----------");
     for (x=0; x < NUMERO_MATERIAS; x++) //impreme bloques de guiones para llenar la matriz
     {
        printf("-------------");
     }
     printf("+\n");//despues de usar printf usar un de escape
 }
void imprimirMatriz (float matriz [NUMERO_ALUMNOS][NUMERO_MATERIAS+1], char alumnos[NUMERO_ALUMNOS][MAX_LONGITUD_CADENA])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERO_MATERIAS]; //matriz
    float promedioMenor = matriz[0][NUMERO_MATERIAS]; //matriz
    char alumnoPromedioMayor [MAX_LONGITUD_CADENA]; //vector
    char alumnoPromedioMenor [MAX_LONGITUD_CADENA]; //vector
    memcpy(alumnoPromedioMayor, alumnos[0], MAX_LONGITUD_CADENA); //hacia donde va "el distino"
    memcpy(alumnoPromedioMenor, alumnos[0], MAX_LONGITUD_CADENA);
    imprimirLineaMatriz();
    printf("!  Alumno  !");
    for (x=0; x < NUMERO_MATERIAS; x++)
    {
        printf("Cal %d   !", x + 1);
    }
    printf("promedio!\n");
    imprimirLineaMatriz();
    for (y=0; y< NUMERO_ALUMNOS; y++)
    {
        printf("!%-10s!", alumnos[y]);
        float suma = 0;
        for (x=0; x< NUMERO_MATERIAS; x++)
        {
            int calificacion = matriz[y][x];
            printf("%-7d !", calificacion);
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
        printf("%0.2f    !\n", promedio);
        imprimirLineaMatriz();
    }
    printf("Promedio mayor: %s con %0.2f\n", alumnoPromedioMayor, promedioMayor);
    printf("Promedio menor: %s con %0.2f\n", alumnoPromedioMenor, promedioMenor);
}
