/* Crie um programa que calcule a �rea de um ret�ngulo. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float base, altura, area;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Digite a base do ret�ngulo: ";
	cin >> base;
	cout << "Digite a altura do ret�ngulo: ";
	cin >> altura;
	area = base*altura;
	cout << "�rea = " << area;
	
	return 0;
}