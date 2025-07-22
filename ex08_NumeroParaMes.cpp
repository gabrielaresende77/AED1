/* Crie um programa que leia um número digitado e escreva o mês relacionado ao número. 
Se o número não corresponder a nenhum mês, escrever: "Mês não encontrado";
Exemplos:
Se recebeu o número 1, então retorna "Janeiro";
Se recebeu o número 4, então retorna "Abril"; */

#include <iostream>
using namespace std;

int main()
{
	int mes;
	setlocale(LC_ALL, "portuguese");
	cout << "Informe o mês: ";
	cin >> mes;
	if(mes==1)
		cout << "Janeiro";
	else 
		if(mes==2)
			cout << "Fevereiro";
		else 
			if(mes==3)
				cout << "Março";
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
													cout << "Mês inexistente!!";		 
	
	return 0;
}