#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int idade, soma = 0, contador = 0;

    do {
        cout << "Digite uma idade (ou 0 para sair): ";
        cin >> idade;

        if (idade > 0) {
            soma += idade;
            contador++;
        }

    } while (idade != 0);

    if (contador > 0) {
        float media = (float)soma / contador;
        cout << "Média das idades: " << media << endl;
    } else {
        cout << "Nenhuma idade foi digitada." << endl;
    }

    return 0;
}