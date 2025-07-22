/* Crie um programa que, usando o comando for, leia 5 valores e imprima a soma */

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	int num, soma=0;
	
	setlocale(LC_ALL, "portuguese");
	
	for(int cont=1; cont <=5; cont++) // cont++ é o mesmo que cont = cont + 1
	{
		cout << "Digite o valor: ";
		cin >> num;
		soma += num; // soma = soma + num;
	}
	cout << "Soma dos valores = " << soma;
	
	return 0;
}