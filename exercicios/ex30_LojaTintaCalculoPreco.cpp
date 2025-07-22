/* Faça um programa para uma loja de tintas. O programa deverá pedir o tamanho 
em metros quadrados da área a ser pintada. Considere que a cobertura da tinta é
de 1 litro para cada 3 metros quadrados e que a tinta é vendida em latas de 18 
litros, que custam R$ 156,00. Informe ao usuário a quantidades de latas de 
tinta a serem compradas e o preço total. */

#include <iostream>
#include <locale.h>

using namespace std;

int main()
{
    float area, litrosNecessarios, preco;
    int latas;

    setlocale(LC_ALL, "portuguese");

    cout << "Informe a área a ser pintada (em m²): ";
    cin >> area;

    litrosNecessarios = area / 3.0;

    latas = litrosNecessarios / 18;
    
    if (litrosNecessarios > latas * 18) 
	{
        latas = latas + 1; // se sobrou tinta, precisa de mais uma lata
    }

    preco = latas * 156.00;

    cout << "Você precisará de " << latas << " lata(s) de tinta." << endl;
    cout << "Preço total: R$ " << preco << endl;
    
	return 0;
}