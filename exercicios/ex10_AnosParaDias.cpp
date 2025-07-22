/*
Faça um programa que recebe um inteiro, representando um valor em anos. 
Mostre quantos dias tem esse intervalo de tempo, assumindo que um ano tenha 365 dias.
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int anos;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Informe o valor em anos: " ;
	cin >> anos;
	cout << "São " << (anos*365) << " dias.";
	
	return 0;
}