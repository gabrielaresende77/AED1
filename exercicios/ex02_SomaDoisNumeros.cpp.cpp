/* Elabore um programa que solicite dois valores inteiros ao usuário e exiba a soma 
entre eles. */

#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Digite um valor inteiro: ";
	cin >> a;
	cout << "Digite o segundo valor inteiro: ";
	cin >> b;
	cout << "Soma = " << (a+b);
	
	return 0;
}