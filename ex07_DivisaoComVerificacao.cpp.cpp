/* Fa�a um programa que calcule a divis�o de dois n�meros. O algoritmo vai receber o dividendo e o divisor.
Se o valor do divisor for 0, mostre a mensagem "Divisor incorreto". Sen�o, mostre o resultado da divis�o. */

#include <iostream>
using namespace std;

int main()
{
	float dividendo, divisor;
	cout << "Informe o dividendo e o divisor para a opera��o: ";
	cin >> dividendo >> divisor;
	if(divisor == 0)
		cout << "Divisor incorreto";
	else
		cout << "Resultado = " << dividendo/divisor;
	
	return 0;
}