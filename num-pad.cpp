#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Ingrese a y b (1<=a<=b): ";
    cin >> a >> b;

    if (a < 1 || a > b) {
        cout << "Rango invalido." << endl;
        return 0;
    }

    int perfectos = 0, abundantes = 0, deficientes = 0;

    for (int num = a; num <= b; num++) {
        int sumaDivisores = 0;
        for (int i = 1; i <= num / 2; i++) {
            if (num % i == 0) {
                sumaDivisores += i;
            }
        }
        cout << num << ": ";
        if (sumaDivisores == num) {
            cout << "perfecto (suma de divisores = " << sumaDivisores << ")" << endl;
            perfectos++;
        } else if (sumaDivisores > num) {
            cout << "abundante (suma de divisores = " << sumaDivisores << ")" << endl;
            abundantes++;
        } else {
            cout << "deficiente (suma de divisores = " << sumaDivisores << ")" << endl;
            deficientes++;
        }
    }

    cout << "Perfectos: " << perfectos << ", abundantes: " << abundantes 
         << ", deficientes: " << deficientes << endl;

    return 0;
}