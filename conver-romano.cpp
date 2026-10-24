#include <iostream>
#include <string>

using namespace std;

int main() {
    int num;
    cout << "Ingrese un entero entre 1 y 3999: ";
    cin >> num;

    if (num < 1 || num > 3999) {
        cout << "Numero fuera de rango." << endl;
        return 0;
    }

    