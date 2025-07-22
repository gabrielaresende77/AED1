/* Crie um programa que recebe o valor do seu sal�rio e calcula os 7% do imposto
de renda. A sa�da do seu programa deve ser o sal�rio bruto (sem abatimento), o 
tanto de imposto que vai pagar e o seu sal�rio l�quido (ap�s descontar o IR). */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float salario, imposto, liquido;

	setlocale(LC_ALL, "portuguese");
    cout << "Digite o valor do sal�rio: R$ ";
    cin >> salario;
    imposto = salario * 0.07;
    liquido = salario - imposto;
    cout << "Sal�rio bruto: R$ " << salario << endl;
    cout << "Imposto de renda (7%): R$ " << imposto << endl;
    cout << "Sal�rio l�quido: R$ " << liquido << endl;
	
	return 0;
}