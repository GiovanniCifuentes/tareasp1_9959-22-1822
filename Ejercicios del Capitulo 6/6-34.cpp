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

    do{do {
        cout << "Por favor escribe tu respuesta\n";
        cin >> respuesta;
        intentos++;
        if (respuesta > num_aleatorio) {
            cout << "Demasiado alto. Intenta de nuevo.\n";
        } else if (respuesta < num_aleatorio) {
            cout << "Demasiado bajo. Intenta de nuevo.\n";
        }
    } while (respuesta != num_aleatorio);

    cout << "¡Felicidades! Adivinaste el numero en " << intentos << " intentos.\n";

    cout << "Te gustaria jugar de nuevo (s/n)?\n";
    cin >> sino;

    }while(sino == 's');

    cout << "No se jugara mas\n";
    cout << "Gracias por adivinar los numeros\n";

    return 0;
}
