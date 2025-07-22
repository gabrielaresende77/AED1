/* Crie um programa que pergunte o ano atual e sua idade, em seguida exibe seu ano de nascimento. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int anoatual, idade, anonasc;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Ano atual: ";
	cin >> anoatual;
	cout << "Idade: ";
	cin >> idade;
	anonasc = anoatual - idade;
	cout << "Ano de nascimento = " << anonasc;
	
	return 0;
}