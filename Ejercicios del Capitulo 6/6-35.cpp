#include <iostream>
#include <cstdlib>  // para rand() y srand()
#include <ctime>    // para time()

using namespace std;

int main() {
    srand(time(NULL));      // inicializa el generador de números aleatorios
    int num_aleatorio = rand() % 1000 + 1;   // genera un número aleatorio entre 1 y 1000
    int respuesta, intentos = 0;
    char sino;

    cout << "Tengo un numero entre 1 y 1000\n";
    cout << "Puedes adivinar mi numero?\n";

    do {
        cout << "Por favor escribe tu respuesta\n";
        cin >> respuesta;
        intentos++;
        if (respuesta > num_aleatorio) {
            cout << "Demasiado alto. Intenta de nuevo.\n";
        } else if (respuesta < num_aleatorio) {
            cout << "Demasiado bajo. Intenta de nuevo.\n";
        } else {
            if (intentos <= 10) {
                cout << "¡Felicidades! Adivinaste el numero en " << intentos << " intentos. ¡O ya sabia usted el secreto, o tuvo suerte!\n";
            } else if (intentos == 11) {
                cout << "¡Felicidades! Adivinaste el numero en " << intentos << " intentos. Aja! Sabía usted el secreto!\n";
            } else {
                cout << "¡Felicidades! Adivinaste el numero en " << intentos << " intentos. Deberia haberlo hecho mejor!\n";
            }
            cout << "Te gustaria jugar de nuevo (s/n)?\n";
            cin >> sino;
            if (sino == 's') {
                num_aleatorio = rand() % 1000 + 1;
                intentos = 0;
                cout << "Tengo un numero entre 1 y 1000\n";
                cout << "Puedes adivinar mi numero?\n";
            } else {
                break;
            }
        }
    } while (true);

    cout << "No se jugara mas\n";
    cout << "Gracias por adivinar los numeros\n";

    return 0;
}
