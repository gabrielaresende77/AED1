#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int idade;
    float altura;
    float somaAlturas = 0;
    int contadorMais50 = 0;

    cout << "Digite a idade (ou 0 ou negativa para encerrar): ";
    cin >> idade;

    while (idade > 0) {
        cout << "Digite a altura (em metros): ";
        cin >> altura;

        if (idade > 50) {
            somaAlturas += altura;
            contadorMais50++;
        }

        cout << "\nDigite a idade (ou 0 ou negativa para encerrar): ";
        cin >> idade;
    }

    if (contadorMais50 > 0) {
        float media = somaAlturas / contadorMais50;
        cout << "\nMédia das alturas das pessoas com mais de 50 anos: " << media << " metros" << endl;
    } else {
        cout << "\nNenhuma pessoa com mais de 50 anos foi registrada." << endl;
    }

    return 0;
}