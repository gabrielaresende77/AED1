/* Escreva programa que exiba o seguinte padr�o na tela, de acordo com o n�mero  
que o usu�rio fornecer, que ser� sempre o n�mero de linhas:  

    *  
   ***  
  *****  
 *******  
*********  
 *******  
  *****  
   ***  
    *  
*/

#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int n;

    cout << "Informe o n�mero de linhas (�mpar): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "N�mero inv�lido! Informe um n�mero �mpar." << endl;
        return 1;
    }

    int meio = n / 2;

    // Parte superior do diamante (incluindo a linha do meio)
    for (int i = 0; i <= meio; i++) {
        // espa�os � esquerda
        for (int esp = 0; esp < meio - i; esp++) {
            cout << " ";
        }
        // asteriscos (2*i + 1)
        for (int ast = 0; ast < 2 * i + 1; ast++) {
            cout << "*";
        }
        cout << endl;
    }

    // Parte inferior do diamante
    for (int i = meio - 1; i >= 0; i--) {
        // espa�os � esquerda
        for (int esp = 0; esp < meio - i; esp++) {
            cout << " ";
        }
        // asteriscos (2*i + 1)
        for (int ast = 0; ast < 2 * i + 1; ast++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}