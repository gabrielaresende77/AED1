/* Fa�a um programa que calcule a m�dia de um aluno.
O algoritmo vai receber os valores de 2 provas: P1 e P2. Calcule a m�dia.
Escreva a m�dia e a situa��o do aluno
Se M�dia >= 6: APROVADO
Sen�o: REPROVADO */

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	float p1, p2, media;
	setlocale(LC_ALL, "portuguese");
	cout << "Informe as notas da P1 e da P2: ";
	cin >> p1 >> p2;
	media = (p1+p2)/2;
	cout << "M�dia = " << media << endl;
	if(media >= 6)
		cout << "Aprovado!!";
	else
		cout << "N�o foi dessa vez, reprovado.";
	
	return 0;
}