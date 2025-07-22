#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int opcao;
    float salario, novoSalario, ferias, decimoTerceiro;
    int meses;

    do {
        cout << "\nMenu de op��es:\n";
        cout << "1. Novo sal�rio\n";
        cout << "2. F�rias\n";
        cout << "3. D�cimo terceiro\n";
        cout << "4. Sair\n";
        cout << "Digite a op��o desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1:
                cout << "Digite o sal�rio atual: R$ ";
                cin >> salario;

                if (salario <= 210.0) {
                    novoSalario = salario + (salario * 0.15);
                } else if (salario <= 600.0) {
                    novoSalario = salario + (salario * 0.10);
                } else {
                    novoSalario = salario + (salario * 0.05);
                }

                cout << "Novo sal�rio: R$ " << novoSalario << endl;
                break;

            case 2:
                cout << "Digite o sal�rio atual: R$ ";
                cin >> salario;

                ferias = salario + (salario / 3);
                cout << "Valor das f�rias: R$ " << ferias << endl;
                break;

            case 3:
                cout << "Digite o sal�rio atual: R$ ";
                cin >> salario;

                cout << "Digite o n�mero de meses de trabalho (at� 12): ";
                cin >> meses;

                if (meses < 0 || meses > 12) {
                    cout << "N�mero de meses inv�lido. Deve ser entre 0 e 12." << endl;
                    break;
                }

                decimoTerceiro = (salario * meses) / 12.0;
                cout << "Valor do d�cimo terceiro: R$ " << decimoTerceiro << endl;
                break;

            case 4:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Op��o inv�lida! Tente novamente." << endl;
        }

    } while (opcao != 4);

    return 0;
}