/* Escreva programa que exiba o seguinte padr�o de sa�da, de acordo com o n�mero  
que o usu�rio fornecer, que ser� sempre o n�mero de linhas:

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
	
	cout << "Informe n�mero de linhas: ";
	cin >> lin;

	string saida = "";
	for(int i = 1; i <= lin; i++) {
		saida += "*";
		cout << saida << endl;
	}
	
	return 0;
}
