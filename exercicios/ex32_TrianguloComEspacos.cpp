/* Escreva programa que exiba o seguinte padrão na tela, de acordo com o número  
que o usuário fornecer, que será sempre o número de linhas:  

    *  
   * *  
  * * *  
 * * * *  
* * * * * 

*/

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "portuguese");
	
    int lin;
    cout << "Informe número de linhas: ";
    cin >> lin;

    for(int i=1; i<=lin; i++) 
    {
        string branco = "";
        for(int b=1; b<=lin - i; b++)
            branco += " ";

        string saida = "";
        for(int j=1; j<=i; j++)
        {
            saida += "*";
            if (j < i)
                saida += " ";
        }

        cout << branco << saida << endl;
    }

    return 0;
}
