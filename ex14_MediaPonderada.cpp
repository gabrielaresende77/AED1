/* A prova do vestibular da UniTabajara tem peso 3 para Matemática, 2.5 para 
Física, 2.5 para Química, 1.0 para Português e também 1.0 para Inglês. 
Crie um sistema que peça as notas do usuário e retorne a média dele. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float mat, fis, qui, por, ing, media;

	setlocale(LC_ALL, "portuguese");
    cout << "Nota de Matemática: ";
    cin >> mat;
    cout << "Nota de Física: ";
    cin >> fis;
    cout << "Nota de Química: ";
    cin >> qui;
    cout << "Nota de Português: ";
    cin >> por;
    cout << "Nota de Inglês: ";
    cin >> ing;
    media = (mat * 3 + fis * 2.5 + qui * 2.5 + por * 1 + ing * 1) / 10;
    cout << "Sua média final é: " << media << endl;
	
	return 0;
}