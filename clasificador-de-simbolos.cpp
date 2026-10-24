#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int vocales = 0, consonantes = 0, digitos = 0, espacios = 0, otros = 0;
    for (int i = 0; i < frase.length(); i++) {
        char c = frase[i];
        if (isdigit(c)) {
            digitos++;
        } else if (isspace(c)) {
            espacios++;
        } else if (isalpha(c)) {
            char minuscula = tolower(c);
            if (minuscula == 'a' || minuscula == 'e' || minuscula == 'i' || minuscula == 'o' || minuscula == 'u') {
                vocales++;
            } else {
                consonantes++;
            }
        } else {
            otros++;
        }
    }
    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;
    cout << "Digitos: " << digitos << endl;
    cout << "Espacios: " << espacios << endl;
    cout << "Otros simbolos: " << otros << endl;

    return 0;
}