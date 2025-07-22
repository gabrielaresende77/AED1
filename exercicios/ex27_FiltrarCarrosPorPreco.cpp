/* Fa�a um programa que leia um vetor com os dados de 5 carros: marca, ano e 
pre�o. Leia um valor p e mostre as informa��es de todos os carros com pre�o 
menor que p. Repita este processo at� que seja lido um valor p=0. */

#include <iostream>
#include <locale.h>
using namespace std;

// Define estrutura para armazenar os dados de um carro
struct Carro {
    string marca;
    int ano;
    float preco;
};

int main()
{
    setlocale(LC_ALL, "portuguese");

    Carro carros[5];

    // Ler os dados dos 5 carros
    for (int i = 0; i < 5; i++) {
        cout << "Digite os dados do carro " << i+1 << ":\n";
        cout << "Marca: ";
        getline(cin, carros[i].marca);
        cout << "Ano: ";
        cin >> carros[i].ano;
        cout << "Pre�o: R$ ";
        cin >> carros[i].preco;
        cin.ignore();  // limpar buffer do teclado para o getline na pr�xima itera��o
        cout << endl;
    }

    float p;
    do {
        cout << "Digite o valor p (0 para sair): R$ ";
        cin >> p;
        cin.ignore(); // limpar buffer

        if (p == 0) break;

        cout << "Carros com pre�o menor que R$ " << p << ":\n";
        bool achou = false;
        for (int i = 0; i < 5; i++) {
            if (carros[i].preco < p) {
                cout << "Marca: " << carros[i].marca << ", Ano: " << carros[i].ano
                     << ", Pre�o: R$ " << carros[i].preco << "\n";
                achou = true;
            }
        }
        if (!achou) {
            cout << "Nenhum carro encontrado com pre�o menor que R$ " << p << ".\n";
        }
        cout << endl;

    } while (p != 0);

    cout << "Programa finalizado.\n";

    return 0;
}