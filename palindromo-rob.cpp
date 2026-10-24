#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int inicio = 0;
    int fin = frase.length() - 1;
    bool esPalindromo = true;

    while (inicio < fin) {
        while (inicio < fin && !isalnum(frase[inicio])) {
            inicio++;
        }
        while (inicio < fin && !isalnum(frase[fin])) {
            fin--;
        }