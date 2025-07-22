/* Faça um programa que leia um valor entre 1 e 9 e imprima o produto do valor lido por variável que vai de 0 a 10 (Tabuada). */

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	int num;
	cout << "Informe um valor entre 1 e 9: ";
	cin >> num;
	for(int i = 0; i <= 10; i++)
	{
		cout << num << " x " << i << " = " << num*i << endl;
	}
	
	return 0;
}