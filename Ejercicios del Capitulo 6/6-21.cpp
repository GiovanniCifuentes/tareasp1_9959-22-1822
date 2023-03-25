#include <iostream>

using namespace std;

bool esPar(int num);

bool esPar(int num) {
  if (num % 2 == 0) {
    return true;
  } else {
    return false;
  }
}

int main ()
{
    int num;
    cout << "Ingrese el numero" << endl;
    cin >> num;
    while (num != 0)
    {
        if(esPar(num))
        {
            cout << num << " Es par" << endl;
        }else{
            cout << num << " No es par" << endl;
        }
        cout << "Ingrese otro numero: " << endl;
        cin >> num;
    }
    return 0;
}
