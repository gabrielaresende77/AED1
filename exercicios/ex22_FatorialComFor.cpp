/* Crie um programa que leia um valor n, calcule e imprima o seu fatorial. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");

	int n, fatorial = 1;

	cout << "Digite um valor inteiro não negativo: ";
	cin >> n;

	if (n < 0) {
		cout << "Fatorial não é definido para números negativos.";
	} else {
		for (int i = 1; i <= n; i++) {
			fatorial = fatorial * i;
		}
		cout << "Fatorial de " << n << " é: " << fatorial;
	}

	return 0;
}
