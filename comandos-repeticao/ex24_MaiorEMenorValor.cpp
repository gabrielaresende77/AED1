#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int valor;
    int maior, menor;
    bool temValor = false; // flag para saber se j� leu algum valor v�lido

    while (true) {
        cout << "Digite um valor positivo (0 para encerrar): ";
        cin >> valor;

        if (valor == 0) {
            break;
        }

        if (valor < 0) {
            cout << "Valor negativo! N�o ser� considerado." << endl;
            continue;
        }

        if (!temValor) {
            // Primeira vez que recebe um valor v�lido
            maior = menor = valor;
            temValor = true;
        } else {
            if (valor > maior) {
                maior = valor;
            }
            if (valor < menor) {
                menor = valor;
            }
        }
    }

    if (temValor) {
        cout << "\nMaior valor: " << maior << endl;
        cout << "Menor valor: " << menor << endl;
    } else {
        cout << "\nNenhum valor positivo foi informado." << endl;
    }

    return 0;
}