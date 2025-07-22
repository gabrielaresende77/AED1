/* Crie um exerc�cio que leia nome, altura e idade do time titular de v�lei do 
curso Sistemas de informa��o.
Ap�s cadastro dos jogadores, informe o nome e a idade do mais novo e a altura e
nome do mais alto. */

#include <iostream>
#include <locale.h>
using namespace std;

struct TJogador {
	string nome;
	int idade;
	int altura;
};

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	TJogador jogadores[6];
	cout << "Time de voley tabajara's\n";
	for(int i=0; i<6; i++)
	{
		cout << "Nome do jogador" << (i+1) << ": ";
		cin >> jogadores[i].nome;
		cout << "Altura(cm): ";
		cin >> jogadores[i].altura;
		cout << "Idade: ";
		cin >> jogadores[i].idade;
	}
	cout << "-----------------------\n";
	// mais novo
	int menor_idade = jogadores[0].idade, pos_idade = 0;
	for(int i=0; i<6; i++)
	{
		if(jogadores[i].idade < menor_idade)
		{
			pos_idade = i;
			menor_idade = jogadores[i].idade;
		}	
	}
	cout << jogadores[pos_idade].nome << " � o jogador mais novo com " <<
		menor_idade << " anos\n";
    //mais alto
    int maior_altura = jogadores[0].altura, pos_altura = 0;
    for(int i=0; i<6; i++)
	{
		if(jogadores[i].altura > maior_altura)
		{
			maior_altura = jogadores[i].altura;
			pos_altura=i;
		}
	}
	
	cout << jogadores[pos_altura].nome << " � o jogador mais alto com " <<
		maior_altura << "cm\n";
	
	return 0;
}