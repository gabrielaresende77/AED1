/* Crie um programa que calcule a área de um retângulo. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float base, altura, area;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Digite a base do retângulo: ";
	cin >> base;
	cout << "Digite a altura do retângulo: ";
	cin >> altura;
	area = base*altura;
	cout << "Área = " << area;
	
	return 0;
}