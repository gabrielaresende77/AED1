/* Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre a classificação da pessoa:

|   Altura         |  Peso         |   Classificação   |
| ---------------- | ------------- | ----------------- |
| Menores que 1,20 | Até 60        | A                 |
|                  | Entre 60 e 90 | D                 |
|                  | Acima de 90   | G                 |
| De 1,20 a 1,70   | Até 60        | B                 |
|                  | Entre 60 e 90 | E                 |
|                  | Acima de 90   | H                 |
| Maiores que 1,70 | Até 60        | C                 |
|                  | Entre 60 e 90 | F                 |
|                  | Acima de 90   | I                 |

*/

#include <iostream>
using namespace std;

int main() {
    float altura, peso;
    char classificacao;

    cout << "Digite a altura da pessoa (em metros): ";
    cin >> altura;

    cout << "Digite o peso da pessoa (em kg): ";
    cin >> peso;

    if (altura < 1.20) {
        if (peso <= 60)
            classificacao = 'A';
        else if (peso <= 90)
            classificacao = 'D';
        else
            classificacao = 'G';
    } else if (altura <= 1.70) {
        if (peso <= 60)
            classificacao = 'B';
        else if (peso <= 90)
            classificacao = 'E';
        else
            classificacao = 'H';
    } else { // altura > 1.70
        if (peso <= 60)
            classificacao = 'C';
        else if (peso <= 90)
            classificacao = 'F';
        else
            classificacao = 'I';
    }

    cout << "Classificacao: " << classificacao << endl;

    return 0;
}
