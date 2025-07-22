/*
Crie uma enquete/pesquisa de intenção de votos para o representante da sala.
A enquete deve computar os votos em cada candidato (ao menos 3 candidatos), número de votos em branco e número de votos nulos. 
Considere que serão entrevistadas 10 pessoas.
Enquete Tabajara:
1 - Fulano de Tal
2 - Ciclano
3 - Beltrano
4 - Branco
5 - Nulo
*/

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
	int v1 = 0, v2 = 0, v3 = 0, v4 = 0, v5 = 0;
	int voto;
	
	setlocale(LC_ALL, "portuguese");
	for(int i = 1; i <= 3; i++)
	{
		cout << "Enquete Tabajara:\n";
		cout << "1 - Fulano de Tal\n";
		cout << "2 - Ciclano\n";
		cout << "3 - Beltrano\n";
		cout << "4 - Branco\n";
		cout << "5 - Nulo\n";
		cout << "Informe sua opção: ";
		cin >> voto;
		if(voto == 1)
			v1++;
		if(voto == 2)
			v2++;
		if(voto == 3)
			v3++;
		if(voto == 4)
			v4++;
		if(voto == 5)
			v5++;
		
		/*
		switch(voto)
		{
		case 1: v1++;
			break;
		case 2: v2++;
			break;
		case 3: v3++;
			break;
		case 4: v4++;
			break;
		case 5: v5++;
			break;
		
		default: cout << "Opção inválida!";
			break;
		}
		*/
	}
	
	// Mostrar o resultado
	cout << "------- Enquete Tabajara - Resultados -------\n";
	cout << "1 - Fulano de Tal: " << v1 << " votos\n";
	cout << "2 - Ciclano: " << v2 << " votos\n";
	cout << "3 - Beltrano: " << v3 << " votos\n";
	cout << "4 - Branco: " << v4 << " votos\n";
	cout <<"5 - Nulo: " << v5 << " votos\n";
	
	return 0;
}