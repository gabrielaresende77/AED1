/* Tendo como dado de entrada a altura (h) de uma pessoa, construa um algoritmo
que calcule seu peso ideal, utilizando as seguintes f�rmulas: 
          Para homens: (72.7h) - 58 Para mulheres: (62.1h) - 44.7 */
          
#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float altura, pesoIdeal;
	char sexo;

	setlocale(LC_ALL, "portuguese");
    cout << "Digite sua altura (em metros): ";
    cin >> altura;
    cout << "Digite seu sexo (M/F): ";
    cin >> sexo;
    if (sexo == 'M')
	{
        pesoIdeal = (72.7 * altura) - 58;
        cout << "Seu peso ideal �: " << pesoIdeal << " kg" << endl;
    }
	else
	if (sexo == 'F'){
        pesoIdeal = (62.1 * altura) - 44.7;
        cout << "Seu peso ideal �: " << pesoIdeal << " kg" << endl;
    }
	else {
        cout << "Sexo inv�lido!" << endl;
    }
	
	return 0;
}