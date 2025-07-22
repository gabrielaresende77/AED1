/* Fa�a um programa para uma loja de tintas. O programa dever� pedir o tamanho 
em metros quadrados da �rea a ser pintada. Considere que a cobertura da tinta �
de 1 litro para cada 3 metros quadrados e que a tinta � vendida em latas de 18 
litros, que custam R$ 156,00. Informe ao usu�rio a quantidades de latas de 
tinta a serem compradas e o pre�o total. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    float area, litrosNecessarios, preco;
    int latas;

    setlocale(LC_ALL, "portuguese");

    cout << "Informe a �rea a ser pintada (em m�): ";
    cin >> area;

    litrosNecessarios = area / 3.0;

    latas = litrosNecessarios / 18;
    
    if (litrosNecessarios > latas * 18) 
	{
        latas = latas + 1; // se sobrou tinta, precisa de mais uma lata
    }

    preco = latas * 156.00;

    cout << "Voc� precisar� de " << latas << " lata(s) de tinta." << endl;
    cout << "Pre�o total: R$ " << preco << endl;
    
	return 0;
}