/* Faça um programa que receba duas variáveis: o valor das horas e do minutos.
Em seguida, converta tudo para minutos e também para segundos. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int hora, min;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Informe as horas e minutos: ";
	cin >> hora >> min;
	cout << "Correspondente em minutos: " << (hora*60+min) << endl;
	cout << "Correspondente em segundos: " <<(hora*60+min)*60 << endl;
	
	return 0;
}