/* Fa�a um programa que recebe um valor de porcentagem do usu�rio, e calcula 
quanto isso representa de um segundo valor que ele digitou. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float porcentagem, valor, resultado;
	
	setlocale(LC_ALL, "portuguese");
    cout << "Digite a porcentagem (%): ";
    cin >> porcentagem;
    cout << "Digite o valor base: ";
    cin >> valor;
    resultado = (porcentagem / 100) * valor;
    cout << porcentagem << "% de " << valor << " �: " << resultado << endl;
	
	return 0;
}