#include <iostream>

using namespace std;

bool esPrimo(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    for (int i = 2; i <= 10000; i++) {
        if (esPrimo(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
