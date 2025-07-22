#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    char codigo;       
    float valor;        
    float totalVista = 0, totalPrazo = 0, totalGeral = 0;

    for (int i = 1; i <= 15; i++) {
        cout << "Transação " << i << " - Digite o código (V para vista, P para prazo): ";
        cin >> codigo;

        if (codigo == 'v' || codigo == 'V') {
            cout << "Digite o valor da compra à vista: ";
            cin >> valor;
            totalVista += valor;
        }
        else if (codigo == 'p' || codigo == 'P') {
            cout << "Digite o valor da compra à prazo: ";
            cin >> valor;
            totalPrazo += valor;
        }
        else {
            cout << "Código inválido! Digite novamente esta transação." << endl;
            i--;
            continue;
        }
    }

    totalGeral = totalVista + totalPrazo;
    float primeiraPrestacao = totalPrazo / 3;

    cout << "\nResumo das transações:\n";
    cout << "a) Total das compras à vista: R$ " << totalVista << endl;
    cout << "b) Total das compras à prazo: R$ " << totalPrazo << endl;
    cout << "c) Total geral das compras: R$ " << totalGeral << endl;
    cout << "d) Valor da primeira prestação das compras à prazo (3x): R$ " << primeiraPrestacao << endl;

    return 0;
}