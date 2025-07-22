/* Escreva programa que exiba o seguinte padrão de saída, de acordo com o número  
que o usuário fornecer, que será sempre o número de linhas:

*  
**  
***  
****  
***** 

*/

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	int lin;
	
	setlocale(LC_ALL, "portuguese");
	
	cout << "Informe número de linhas: ";
	cin >> lin;

	string saida = "";
	for(int i = 1; i <= lin; i++) {
		saida += "*";
		cout << saida << endl;
	}
	
	return 0;
}
