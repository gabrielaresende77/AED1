#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    char sexo, resposta;
    int totalSim = 0;
    int totalNao = 0;
    int mulheresSim = 0;
    int homens = 0;
    int homensNao = 0;

    for (int i = 1; i <= 10; i++) {
        cout << "Entrevistado " << i << endl;

        cout << "Digite o sexo (M ou F): ";
        cin >> sexo;
        if (sexo != 'M' && sexo != 'm' && sexo != 'F' && sexo != 'f') {
            cout << "Sexo inválido! Digite novamente." << endl;
            i--;
            continue;
        }

        cout << "Gostou do produto? (S - sim, N - não): ";
        cin >> resposta;
        if (resposta != 'S' && resposta != 's' && resposta != 'N' && resposta != 'n') {
            cout << "Resposta inválida! Digite novamente." << endl;
            i--;
            continue;
        }

        if (resposta == 'S' || resposta == 's') {
            totalSim++;
            if (sexo == 'F' || sexo == 'f') {
                mulheresSim++;
            }
        } else {
            totalNao++;
            if (sexo == 'M' || sexo == 'm') {
                homensNao++;
            }
        }

        if (sexo == 'M' || sexo == 'm') {
            homens++;
        }

        cout << endl;
    }

    float percHomensNao = 0;
    if (homens > 0) {
        percHomensNao = (homensNao * 100.0)/homens;
    }

    cout << "Total de pessoas que responderam sim: " << totalSim << endl;
    cout << "Total de pessoas que responderam não: " << totalNao << endl;
    cout << "Total de mulheres que responderam sim: " << mulheresSim << endl;
    cout << "Percentual de homens que responderam não: " << percHomensNao << "%" << endl;

    return 0;
}