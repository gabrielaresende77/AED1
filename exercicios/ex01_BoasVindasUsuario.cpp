/* Crie um programa que solicite o nome do usu�rio e exiba uma mensagem de 
boas-vindas personalizada. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	string nome;
	setlocale(LC_ALL, "portuguese");
	cout << "Informe seu nome: ";
	//cin >> nome;
	getline(cin, nome);
	cout << nome << ", seja bem vindo � programa��o C++";
	
	return 0;
} 