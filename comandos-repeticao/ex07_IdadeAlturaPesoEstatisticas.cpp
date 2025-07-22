#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int idade;
    float altura, peso;

    int qtdMais50 = 0;
    int qtdEntre10e20 = 0;
    float somaAltura10e20 = 0;
    int qtdPesoMenor40 = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Pessoa " << i << endl;

        cout << "Digite a idade: ";
        cin >> idade;

        cout << "Digite a altura (metros): ";
        cin >> altura;

        cout << "Digite o peso (kg): ";
        cin >> peso;

        if (idade > 50) {
            qtdMais50++;
        }

        if (idade >= 10 && idade <= 20) {
            somaAltura10e20 += altura;
            qtdEntre10e20++;
        }

        if (peso < 40) {
            qtdPesoMenor40++;
        }

        cout << endl;
    }

    float mediaAltura10e20 = 0;
    if (qtdEntre10e20 > 0) {
        mediaAltura10e20 = somaAltura10e20/qtdEntre10e20;
    }

    float percPesoMenor40 = (qtdPesoMenor40 * 100.0)/5;

    cout << "Quantidade de pessoas com idade superior a 50 anos: " << qtdMais50 << endl;

    if (qtdEntre10e20 > 0) {
        cout << "Média das alturas das pessoas com idade entre 10 e 20 anos: " << mediaAltura10e20 << " metros" << endl;
    } else {
        cout << "Nenhuma pessoa com idade entre 10 e 20 anos para calcular a média de altura." << endl;
    }

    cout << "Porcentagem de pessoas com peso inferior a 40 kg: " << percPesoMenor40 << "%" << endl;

    return 0;
}