#include <iostream>

using namespace std;

int segundos_desde_ultima_12(int horas, int minutos, int segundos) {
    int segundos_totales = horas * 3600 + minutos * 60 + segundos; //convertir a segundos
    return segundos_totales % (12 * 3600); //calcular segundos desde la última vez que el reloj marcó las 12
}

int diferencia_entre_horas(int horas1, int minutos1, int segundos1, int horas2, int minutos2, int segundos2) {
    int segundos1_desde_12 = segundos_desde_ultima_12(horas1, minutos1, segundos1);
    int segundos2_desde_12 = segundos_desde_ultima_12(horas2, minutos2, segundos2);
    int diferencia = segundos2_desde_12 - segundos1_desde_12;
    if (diferencia < 0) {
        diferencia += 12 * 3600; //agregar 12 horas si la segunda hora es anterior a la primera
    }
    return diferencia;
}

int main() {
    int horas1, minutos1, segundos1, horas2, minutos2, segundos2;
    cout << "Ingrese la primera hora (horas minutos segundos): ";
    cin >> horas1 >> minutos1 >> segundos1;
    cout << "Ingrese la segunda hora (horas minutos segundos): ";
    cin >> horas2 >> minutos2 >> segundos2;
    int diferencia = diferencia_entre_horas(horas1, minutos1, segundos1, horas2, minutos2, segundos2);
    cout << "La diferencia entre las dos horas es de " << diferencia << " segundos." << endl;
    return 0;
}
