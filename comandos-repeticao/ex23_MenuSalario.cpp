#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int opcao;
    float salario, novoSalario, ferias, decimoTerceiro;
    int meses;

    do {
        cout << "\nMenu de opções:\n";
        cout << "1. Novo salário\n";
        cout << "2. Férias\n";
        cout << "3. Décimo terceiro\n";
        cout << "4. Sair\n";
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o salário atual: R$ ";
                cin >> salario;

                if (salario <= 210.0) {
                    novoSalario = salario + (salario * 0.15);
                } else if (salario <= 600.0) {
                    novoSalario = salario + (salario * 0.10);
                } else {
                    novoSalario = salario + (salario * 0.05);
                }

                cout << "Novo salário: R$ " << novoSalario << endl;
                break;

            case 2:
                cout << "Digite o salário atual: R$ ";
                cin >> salario;

                ferias = salario + (salario / 3);
                cout << "Valor das férias: R$ " << ferias << endl;
                break;

            case 3:
                cout << "Digite o salário atual: R$ ";
                cin >> salario;

                cout << "Digite o número de meses de trabalho (até 12): ";
                cin >> meses;

                if (meses < 0 || meses > 12) {
                    cout << "Número de meses inválido. Deve ser entre 0 e 12." << endl;
                    break;
                }

                decimoTerceiro = (salario * meses) / 12.0;
                cout << "Valor do décimo terceiro: R$ " << decimoTerceiro << endl;
                break;

            case 4:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }

    } while (opcao != 4);

    return 0;
}