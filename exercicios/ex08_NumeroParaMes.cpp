/* Crie um programa que leia um n�mero digitado e escreva o m�s relacionado ao n�mero. 
Se o n�mero n�o corresponder a nenhum m�s, escrever: "M�s n�o encontrado";
Exemplos:
Se recebeu o n�mero 1, ent�o retorna "Janeiro";
Se recebeu o n�mero 4, ent�o retorna "Abril"; */

#include <iostream>
using namespace std;

int main()
{
	int mes;
	setlocale(LC_ALL, "portuguese");
	cout << "Informe o m�s: ";
	cin >> mes;
	if(mes==1)
		cout << "Janeiro";
	else 
		if(mes==2)
			cout << "Fevereiro";
		else 
			if(mes==3)
				cout << "Mar�o";
			else
				if(mes==4)
					cout << "Abril";
				else
					if(mes==5)
						cout << "Maio";
					else
						if(mes==6)	
							cout << "Junho";
						else
							if(mes==7)
								cout << "Julho";
							else
								if(mes==8)
									cout << "Agosto";
								else
									if(mes==9)
										cout << "Setembro";
									else
										if(mes==10)
											cout << "Outubro";
										else
											if(mes==11)
												cout << "Novembro";
											else
												if(mes==12)
													cout << "Dezembro";
												else
													cout << "M�s inexistente!!";		 
	
	return 0;
}