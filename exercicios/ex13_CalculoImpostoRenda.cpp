/* Crie um programa que recebe o valor do seu salário e calcula os 7% do imposto
de renda. A saída do seu programa deve ser o salário bruto (sem abatimento), o 
tanto de imposto que vai pagar e o seu salário líquido (após descontar o IR). */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float salario, imposto, liquido;

	setlocale(LC_ALL, "portuguese");
    cout << "Digite o valor do salário: R$ ";
    cin >> salario;
    imposto = salario * 0.07;
    liquido = salario - imposto;
    cout << "Salário bruto: R$ " << salario << endl;
    cout << "Imposto de renda (7%): R$ " << imposto << endl;
    cout << "Salário líquido: R$ " << liquido << endl;
	
	return 0;
}