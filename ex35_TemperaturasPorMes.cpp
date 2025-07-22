/* Crie um programa que armazene a maior e a menor da temperatura de cada m�s 
e informe a m�dia mais alta do ano e o m�s correspondente. */

#include <iostream>
#include <locale.h>
using namespace std;

struct TTemperaturas {
	string mes;
	float maior, menor;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	TTemperaturas temp[12];
	float media = 0;
	int pos = 0;

	for(int x = 0; x < 12; x++) {
		cout << "\n--- Cadastro do m�s " << x + 1 << " ---\n";
		cout << "M�s: ";
		cin >> temp[x].mes;
		cout << "Maior temperatura: ";
		cin >> temp[x].maior;
		cout << "Menor temperatura: ";
		cin >> temp[x].menor;
	}

	media = (temp[0].maior + temp[0].menor) / 2;

	for(int x = 0; x < 12; x++) {
		float mediaAtual = (temp[x].maior + temp[x].menor) / 2;
		if(mediaAtual > media) {
			media = mediaAtual;
			pos = x;
		}
	}

	cout << "\n=============================\n";
	cout << "O m�s de " << temp[pos].mes << " foi o mais quente\n";
	cout << "com m�dia igual a " << media << " graus.\n";
	cout << "=============================\n";

	return 0;
}