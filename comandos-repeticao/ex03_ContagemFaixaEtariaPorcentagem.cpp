#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int idade, faixa1 = 0, faixa2 = 0, faixa3 = 0, faixa4 = 0, faixa5 = 0;

    for (int i = 1; i <= 8; i++) {
        cout << "Digite a idade da pessoa " << i << ": ";
        cin >> idade;

        if (idade <= 15) {
            faixa1++;
        } else if (idade <= 30) {
            faixa2++;
        } else if (idade <= 45) {
            faixa3++;
        } else if (idade <= 60) {
            faixa4++;
        } else {
            faixa5++;
        }
    }

    cout << "\nQuantidade por faixa et�ria:\n";
    cout << "Até 15 anos: " << faixa1 << endl;
    cout << "16 a 30 anos: " << faixa2 << endl;
    cout << "31 a 45 anos: " << faixa3 << endl;
    cout << "46 a 60 anos: " << faixa4 << endl;
    cout << "Acima de 60 anos: " << faixa5 << endl;

    float total = 8.0;
    float porcentagem1 = (faixa1 / total) * 100;
    float porcentagem5 = (faixa5 / total) * 100;

    cout << "\nPorcentagem de pessoas até 15 anos: " << porcentagem1 << "%" << endl;
    cout << "Porcentagem de pessoas acima de 60 anos: " << porcentagem5 << "%" << endl;

    return 0;
}