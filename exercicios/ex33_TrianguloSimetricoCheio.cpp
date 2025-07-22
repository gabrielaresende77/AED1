/* Escreva programa que exiba o seguinte padrão na tela, de acordo com o número  
que o usuário fornecer, que será sempre o número de linhas:  

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

    cout << "Informe o número de linhas (ímpar): ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "Número inválido! Informe um número ímpar." << endl;
        return 1;
    }

    int meio = n / 2;

    // Parte superior do diamante (incluindo a linha do meio)
    for (int i = 0; i <= meio; i++) {
        // espaços à esquerda
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
        // espaços à esquerda
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