/* Escreva um programa que leia um n�mero inteiro e calcule a soma de todos os
divisores desse n�mero, com exce��o dele pr�prio.
Ex: a soma dos divisores do n�mero 45 � 1 + 3 + 5 + 9 + 15 = 33 */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int num, x = 1, soma = 0;
	cout << "Informe um valor inteiro: ";
	cin >> num;
	do
	{
		if(num % x == 0)
		{
			soma = soma + x;
		}
		x++;
	} while (x <= num/2);
	cout << "Soma dos divisores = " << soma;
	
	return 0;
}