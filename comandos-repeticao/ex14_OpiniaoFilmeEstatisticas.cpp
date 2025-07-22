#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int idade, opiniao;

    int qtdOtimo = 0;
    int somaIdadeOtimo = 0;
    int qtdRegular = 0;
    int qtdBom = 0;

    for (int i = 1; i <= 15; i++) {
        cout << "Espectador " << i << endl;

        cout << "Digite a idade: ";
        cin >> idade;

        cout << "Digite a opinião (3 - ótimo, 2 - bom, 1 - regular): ";
        cin >> opiniao;

        if (opiniao < 1 || opiniao > 3) {
            cout << "Opinião inválida! Digite novamente." << endl;
            i--;
            continue;
        }

        if (opiniao == 3) {
            qtdOtimo++;
            somaIdadeOtimo += idade;
        }
        else if (opiniao == 2) {
            qtdBom++;
        }
        else if (opiniao == 1) { 
            qtdRegular++;
        }

        cout << endl;
    }

    float mediaIdadeOtimo = 0;
    if (qtdOtimo > 0) {
        mediaIdadeOtimo = (float)somaIdadeOtimo / qtdOtimo;
    }

    float percBom = (qtdBom * 100) / 15;

    cout << "Média das idades das pessoas que responderam ótimo: ";
    if (qtdOtimo > 0) {
        cout << mediaIdadeOtimo << endl;
    } else {
        cout << "Nenhuma pessoa respondeu ótimo." << endl;
    }

    cout << "Quantidade de pessoas que responderam regular: " << qtdRegular << endl;
    cout << "Percentagem de pessoas que responderam bom: " << percBom << "%" << endl;

    return 0;
}