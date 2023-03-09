//Ejemplo para poder usar vectores, constantes

#include <iostream>

using namespace std;

//#define CANTIDAD 5;
//definir constantes (respresentaciones en memoria que no cambian respecto al tiempo)


int main (){

    const int NUMERONOTAS = 5; //definir constantes (de otra forma)(la mas aconsejable)
    double notas [NUMERONOTAS]; //definiendo notas y numeros de filas (NUMERONOTAS)

    for (int i = 0; i < NUMERONOTAS; i++){

        cout << "Ingrese la nota: " << i + 1 << " :"; // porque 1? porque i empieza en 0 y queremos en 1
        cin >> notas [i];
    }

    double suma = 0;
    for (int i = 0; i < NUMERONOTAS; i++){

        suma = suma + notas[i];
        cout << "Nota " << i + 1 << " Calificacion:  "<< notas[i]<<endl;
    }

    double promedioNotas = suma / NUMERONOTAS;

    string  letra = " ";
    if (promedioNotas == 100)
    {
        letra = "A";
    }else if (promedioNotas >= 80)
    {
        letra = "B";
    }else if (promedioNotas >= 70)
    {
        letra = "C";
    }else if (promedioNotas >= 60)
    {
        letra = "D";
    }else
        letra = "E";

    cout << "Total notas: "<< suma << endl;
    cout << "Promedio notas: "<<promedioNotas <<endl;
    cout <<"Por el promedio obtenido usted merece una: "<< letra<<endl;

    return 0;
}
