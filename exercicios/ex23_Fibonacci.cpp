/* A série de Fibonacci é formada pela sequência 0,1,1,2,3,5,8,13,21,34,55,...  
Onde o próximo termo é sempre a soma dos dois anteriores.  
Faça um programa capaz de gerar a série até o n-ésimo termo, que o usuário  
deverá fornecer. */

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	int n, t1=0, t2=1, t3;
	
	setlocale(LC_ALL, "portuguese");
	cout << "Digite um número: ";
	cin >> n;
	
	if (n <=0) {
		cout << "Inválido. Digite um número inteiro positivo!" << endl;
	} else if (n == 1) {
		cout << t1 << endl;
	} else {
		cout << t1 << endl << t2 << endl;
		for (int i=2; i < n; i++) {
			t3 = t1 + t2;
			cout << t3 << endl;
			t1 = t2;
			t2 = t3;
		}
	}
	
	return 0;
}