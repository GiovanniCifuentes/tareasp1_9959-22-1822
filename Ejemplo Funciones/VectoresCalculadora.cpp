#include <iostream>
#include <cstdlib>

using namespace std;

void menuPrincipal();
void datosAlumnos();

int main (){
    menuPrincipal();

    return 0;

}
void menuPrincipal(){
    char opcion;
    int opciones;
    bool repetir = true;
    do{
        system("cls");
        cout << "\n\n\t\tIngreso de calificaciones y promedios de los alumnos"<< endl;
        cout << "\t\t---------------------------------------------------------"<< endl;
        cout << "\n\n\t\tMENU PRINCIPAL"<< endl;
        cout << "\t\t-----------------"<< endl;
        cout << "\t1. Ingresar Datos de los alumnos"<< endl;
        cout << "\t2. --------SALIR--------"<< endl;
        cout << "\n\t ingrese una opcion: ";
        cin >> opciones;


        switch (opciones){
        case 1:
            do{
            datosAlumnos();
            cout << "\n\n\tDeseas realizar otra operacion? escribir s si Si, o n si No"<<endl;
            cin >> opcion;
            }while(opcion == 's');
            cout << "\n\n\t "<< endl;
            cout << "\n\tNo se realizara ninguna operacion mas"<< endl;
            system ("pause > nul");
            break;

        case 2:
            cout << "\n\tNo se realizara ninguna operacion"<<endl;
            cout << "\n\tSaliendo del programa"<<endl;
            repetir = false;
            break;
        }

      }while(repetir);
}

void datosAlumnos(){
    system("cls");
    int numeroAlumnos;
    cout << "\n\n\tIngrese cuantos alumnos desea ingresar: ";
    cin >>numeroAlumnos;

    const int DATOSALUMNOSA = numeroAlumnos;
    string Nombre [DATOSALUMNOSA];
    string Apellido [DATOSALUMNOSA];
    cout << "\n\n\tIngrese las nombres y apellidos del alumno: "<<endl;

    for (int i = 0; i < DATOSALUMNOSA; i++){

        cout << "\n\tCuales son los nombres del alumno a ingresar: ";
        cin >>Nombre [i];
    }
    for (int i = 0; i < DATOSALUMNOSA; i++){

         cout << "\n\tCuales son los apellidos del alumno a ingresar: ";
         cin >>Apellido [i];
    }


    const int NUMERONOTAS = numeroAlumnos;
    double notaMate [NUMERONOTAS];
    double notaFisica [NUMERONOTAS];
    double notaNaturales [NUMERONOTAS];
    double notaSociales [NUMERONOTAS];
    double notaComu [NUMERONOTAS];

    for (int i = 0; i < NUMERONOTAS; i++){

        cout << "\n\tIngrese la nota de Mate: ";
        cin >> notaMate [i];
    }
    for (int i = 0; i < NUMERONOTAS; i++){

        cout << "\n\tIngrese la nota de Fisica: ";
        cin >> notaFisica [i];
    }
    for (int i = 0; i < NUMERONOTAS; i++){

        cout << "\n\tIngrese la nota de Ciencias Naturales: ";
        cin >> notaNaturales [i];
    }
    for (int i = 0; i < NUMERONOTAS; i++){

        cout << "\n\tIngrese la nota de Ciencias Sociales: ";
        cin >> notaSociales [i];
    }
    for (int i = 0; i < NUMERONOTAS; i++){

        cout << "\n\tIngrese la nota de Comunicacion y Lenguaje: ";
        cin >> notaComu [i];
    }

    system("cls");

    double suma = 0;
    for (int i = 0; i < NUMERONOTAS; i++){

        suma = suma + notaMate[i] + notaFisica [i] + notaNaturales [i] + notaSociales [i] + notaComu [i];
        cout << "\n\n\tEstos son los totales y promedios del alumno: "<<endl;
        cout << "\n\tNota de Mate:  "<< notaMate[i]<<endl;
        cout << "\n\tNota de Fisica:  "<< notaFisica [i]<<endl;
        cout << "\n\tNota de Ciencias Naturales:  "<< notaNaturales [i]<<endl;
        cout << "\n\tNota de Ciencias Sociales:  "<< notaSociales [i]<<endl;
        cout << "\n\tNota de Comunicacion y Lenguaje:  "<< notaComu [i]<<endl;
    }

    double promedioNotas = suma / 5;

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

    cout << "\n\n\tTotal de zona acumulada: "<<endl;
    cout << "\n\tTotal notas: "<< suma << endl;
    cout << "\n\n\tPromedio Total: "<<endl;
    cout << "\n\tPromedio notas: "<<promedioNotas <<endl;
    cout << "\n\tPor el promedio obtenido usted merece una: "<< letra<<endl;

    system ("pause > nul");

}


