/* Desenvolva um programa que converta uma temperatura de graus Celsius para 
Fahrenheit. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int c, f;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Digite a temperatura em Celsius: ";
	cin >> c;
	f = 1.8*c + 32;
	cout << "Temperatura em Fahrenheit = " << f;
	
	return 0;
}