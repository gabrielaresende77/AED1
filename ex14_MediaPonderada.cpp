/* A prova do vestibular da UniTabajara tem peso 3 para Matem�tica, 2.5 para 
F�sica, 2.5 para Qu�mica, 1.0 para Portugu�s e tamb�m 1.0 para Ingl�s. 
Crie um sistema que pe�a as notas do usu�rio e retorne a m�dia dele. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	float mat, fis, qui, por, ing, media;

	setlocale(LC_ALL, "portuguese");
    cout << "Nota de Matem�tica: ";
    cin >> mat;
    cout << "Nota de F�sica: ";
    cin >> fis;
    cout << "Nota de Qu�mica: ";
    cin >> qui;
    cout << "Nota de Portugu�s: ";
    cin >> por;
    cout << "Nota de Ingl�s: ";
    cin >> ing;
    media = (mat * 3 + fis * 2.5 + qui * 2.5 + por * 1 + ing * 1) / 10;
    cout << "Sua m�dia final �: " << media << endl;
	
	return 0;
}