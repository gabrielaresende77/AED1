/* Elabore um programa que leia tr�s valores reais informados pelo usu�rio e calcule a 
m�dia aritm�tica entre eles. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float n1, n2, n3;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Digite 3 valores: ";
	cin >> n1 >> n2 >> n3;
	
	cout << "M�dia = " << (n1+n2+n3)/3;
	return 0;
}