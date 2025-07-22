/* Marculino deseja fazer um controle das notas de faltas das disciplinas do semestre,
para isso lhe pediu que faça um programa em c++ que cadastra as disciplinas, as
médias obtidas e o número de faltas. Crie também uma busca que indique a situação
em determinada disciplina, ou seja indica se está aprovado ou reprovado. */

#include <iostream>
using namespace std;

struct TDisciplina {
	string nome;
	float media;
	int faltas;
};

int main()
{
	TDisciplina disc[5];

	cin.ignore(); // só um ignore no início, antes do primeiro getline

	// cadastro das disciplinas
	for(int i = 0; i < 5; i++)
	{
		cout << "Nome da disciplina: ";
		getline(cin, disc[i].nome);

		cout << "Média: ";
		cin >> disc[i].media;

		cout << "Número de faltas: ";
		cin >> disc[i].faltas;

		cin.ignore(); // limpar após o cin das faltas, antes do próximo getline

		cout << "-------------\n";
	}

	// busca determinada disciplina
	string nome;
	cout << "Qual disciplina deseja consultar? ";
	getline(cin, nome);

	for(int i = 0; i < 5; i++)
	{
		if(nome == disc[i].nome)
		{
			if(disc[i].media >= 6 && disc[i].faltas < 19)
				cout << "Você está aprovado!\n";
			else
				cout << "BOOM, não foi dessa vez.\n";
		}
	}

	return 0;
}