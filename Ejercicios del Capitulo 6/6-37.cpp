#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned int n) {
    unsigned long fib = 0;
    unsigned long prev1 = 1, prev2 = 0;

    for (unsigned int i = 1; i <= n; ++i) {
        if (i == 1) {
            fib = 1;
        } else {
            fib = prev1 + prev2;
            prev2 = prev1;
            prev1 = fib;
        }
    }

    return fib;
}

int main() {
    // calcula los valores de fibonacci del 0 al 10
    for (unsigned int contador = 0; contador <= 10; ++contador)
        cout << "fibonacci(" << contador << ") = " << fibonacci(contador) << endl;

    // muestra valores de fibonacci mayores
    cout << "\nfibonacci(20) = " << fibonacci(20) << endl;
    cout << "fibonacci(30) = " << fibonacci(30) << endl;
    cout << "fibonacci(35) = " << fibonacci(35) << endl;

    return 0;
}
