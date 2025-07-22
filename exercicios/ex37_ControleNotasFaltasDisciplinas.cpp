/* Marculino deseja fazer um controle das notas de faltas das disciplinas do semestre,
para isso lhe pediu que fa�a um programa em c++ que cadastra as disciplinas, as
m�dias obtidas e o n�mero de faltas. Crie tamb�m uma busca que indique a situa��o
em determinada disciplina, ou seja indica se est� aprovado ou reprovado. */

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

	cin.ignore(); // s� um ignore no in�cio, antes do primeiro getline

	// cadastro das disciplinas
	for(int i = 0; i < 5; i++)
	{
		cout << "Nome da disciplina: ";
		getline(cin, disc[i].nome);

		cout << "M�dia: ";
		cin >> disc[i].media;

		cout << "N�mero de faltas: ";
		cin >> disc[i].faltas;

		cin.ignore(); // limpar ap�s o cin das faltas, antes do pr�ximo getline

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
				cout << "Voc� est� aprovado!\n";
			else
				cout << "BOOM, n�o foi dessa vez.\n";
		}
	}

	return 0;
}