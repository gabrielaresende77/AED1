/* Crie um programa que receba 5 n�meros e mostre a quantidade de n�meros maiores que 10. Utilize a estrutura de repeti��o PARA. */

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	int num, n10 = 0;
	
	for (int cont = 1; cont <= 5; cont++)
	{
		cout << "Digite o valor: ";
		cin >> num;
		if(num > 10)
			n10 = n10 + 1; // n10 += 1;
	}
	cout << "Foram lidos " << n10 << " valores acima de 10.";
	
	return 0;
} 