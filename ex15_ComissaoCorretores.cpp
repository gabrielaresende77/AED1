/* Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma comissão calculada de acordo com o valor de suas vendas.
Se o valor da venda de um corretor for maior que R$ 50.000.00, a comissão será de 12% do valor vendido.
Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo extremos), a comissão será de 9.5%.
Em qualquer outro caso, a comissão será de 7%.
Escreva um algoritmo que gere um relatório contendo nome, valor, venda e comissão de cada um dos corretores.
O relatório deve mostrar também o total de vendas da empresa. */

#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
	string nome1, nome2, nome3;
	float venda1, venda2, venda3;
	float total, com1, com2, com3;
	setlocale(LC_ALL, "portuguese");
	cout << "Informe o nome e o total das vendas do primeiro corretor: ";
	cin >> nome1 >> venda1;
	cout << "Informe o nome e o total das vendas do segundo corretor: ";
	cin >> nome2 >> venda2;
	cout << "Informe o nome e o total das vendas do terceiro corretor: ";
	cin >> nome3 >> venda3;
	total = venda1+venda2+venda3;
	
	// vendedor 1
	if(venda1 > 50000) 
		com1 = venda1*0.12;
	else
		if(venda1 < 30000)
			com1 = venda1*0.07;
		else 
			com1 = venda1*0.095;
		
    // vendedor 2
    if(venda2 > 50000)
    	com2 = venda2*0.12;
    else 
    	if(venda2 < 30000)
    		com2 = venda2*0.07;
    	else 
			com2 = venda2*0.095; 
    
	// vendedor 3
	if(venda3 > 50000)
    	com3 = venda3*0.12;
    else 
    	if(venda3 < 30000)
    		com3 = venda3*0.07;
    	else 
			com3 = venda3*0.095;

    cout << endl << "--------- Relatório ---------" << endl;
  	cout << "O vendedor " << nome1 << " vendeu R$" << venda1 << " e recebeu R$" << com1 << endl;
	cout << "O vendedor " << nome2 << " vendeu R$" << venda2 << " e recebeu R$" << com2 << endl;
	cout << "O vendedor " << nome3 << " vendeu R$" << venda3 << " e recebeu R$" << com3 << endl;
	cout << "O total de venda da empresa foi R$" << total;
  	 
	return 0;
}