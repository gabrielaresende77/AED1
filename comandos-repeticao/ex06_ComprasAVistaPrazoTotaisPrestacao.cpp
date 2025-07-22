#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    char codigo;       
    float valor;        
    float totalVista = 0, totalPrazo = 0, totalGeral = 0;

    for (int i = 1; i <= 15; i++) {
        cout << "Transa��o " << i << " - Digite o c�digo (V para vista, P para prazo): ";
        cin >> codigo;

        if (codigo == 'v' || codigo == 'V') {
            cout << "Digite o valor da compra � vista: ";
            cin >> valor;
            totalVista += valor;
        }
        else if (codigo == 'p' || codigo == 'P') {
            cout << "Digite o valor da compra � prazo: ";
            cin >> valor;
            totalPrazo += valor;
        }
        else {
            cout << "C�digo inv�lido! Digite novamente esta transa��o." << endl;
            i--;
            continue;
        }
    }

    totalGeral = totalVista + totalPrazo;
    float primeiraPrestacao = totalPrazo / 3;

    cout << "\nResumo das transa��es:\n";
    cout << "a) Total das compras � vista: R$ " << totalVista << endl;
    cout << "b) Total das compras � prazo: R$ " << totalPrazo << endl;
    cout << "c) Total geral das compras: R$ " << totalGeral << endl;
    cout << "d) Valor da primeira presta��o das compras � prazo (3x): R$ " << primeiraPrestacao << endl;

    return 0;
}