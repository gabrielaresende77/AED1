/* Faça um programa que calcule a média de um aluno.
O algoritmo vai receber os valores de 2 provas: P1 e P2. Calcule a média.
Escreva a média e a situação do aluno
Se Média >= 6: APROVADO
Senão: REPROVADO */

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
	cout << "Média = " << media << endl;
	if(media >= 6)
		cout << "Aprovado!!";
	else
		cout << "Não foi dessa vez, reprovado.";
	
	return 0;
}