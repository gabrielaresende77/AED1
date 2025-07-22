/* Faça um programa que some os números ímpares contidos em um intervalo 
definido pelo usuário. O usuário define o valor inicial e o valor final deste
intervalo e o programa deve somar todos os números ímpares contidos neste intervalo.
Caso o usuário digite um intervalo inválido (começando por um valor maior que o
valor final) deve ser escrito uma mensagem de erro na tela, "Intervalo de valores inválido"
e o programa termina.
Exemplo de tela de saída:
	Digite o valor inicial: 5
	Digite o valor final: 10
	Soma dos ímpares neste intervalo: 21
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	int val1, val2, soma = 0, cont;
	cout << "Informe um valor inicial: ";
	cin >> val1;
	cout << "Informe um valor final: ";
	cin >> val2;
	if (val1 > val2)
		cout << "Intervalo de valores inválido!";
	else {
		cont = val1;
		do {
			if(cont % 2 == 1)
				soma += cont;
			cont++;
		} while (cont <= val2);
		cout << "Soma dos ímpares neste intervalo: " << soma;
	} 
	
	return 0;
}