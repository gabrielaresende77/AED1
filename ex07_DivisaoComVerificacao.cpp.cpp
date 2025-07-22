/* Faça um programa que calcule a divisão de dois números. O algoritmo vai receber o dividendo e o divisor.
Se o valor do divisor for 0, mostre a mensagem "Divisor incorreto". Senão, mostre o resultado da divisão. */

#include <iostream>
using namespace std;

int main()
{
	float dividendo, divisor;
	cout << "Informe o dividendo e o divisor para a operação: ";
	cin >> dividendo >> divisor;
	if(divisor == 0)
		cout << "Divisor incorreto";
	else
		cout << "Resultado = " << dividendo/divisor;
	
	return 0;
}