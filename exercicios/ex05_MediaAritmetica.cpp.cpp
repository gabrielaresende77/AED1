/* Elabore um programa que leia três valores reais informados pelo usuário e calcule a 
média aritmética entre eles. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float n1, n2, n3;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Digite 3 valores: ";
	cin >> n1 >> n2 >> n3;
	
	cout << "Média = " << (n1+n2+n3)/3;
	return 0;
}