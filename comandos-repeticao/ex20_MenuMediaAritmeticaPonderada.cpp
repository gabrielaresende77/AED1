#include <iostream>
#include <locale.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	
    int opcao;

    do {
        cout << "\nMenu de opções:" << endl;
        cout << "1. Média aritmética" << endl;
        cout << "2. Média ponderada" << endl;
        cout << "3. Sair" << endl;
        cout << "Digite a opção desejada: ";
        cin >> opcao;

        switch (opcao) {
            case 1: {
                float nota1, nota2;
                cout << "Digite a primeira nota: ";
                cin >> nota1;
                cout << "Digite a segunda nota: ";
                cin >> nota2;

                float media = (nota1 + nota2) / 2;
                cout << "A média aritmética é: " << media << endl;
                break;
            }

            case 2: {
                float n1, n2, n3;
                int p1, p2, p3;

                cout << "Digite a primeira nota: ";
                cin >> n1;
                cout << "Digite o peso da primeira nota: ";
                cin >> p1;

                cout << "Digite a segunda nota: ";
                cin >> n2;
                cout << "Digite o peso da segunda nota: ";
                cin >> p2;

                cout << "Digite a terceira nota: ";
                cin >> n3;
                cout << "Digite o peso da terceira nota: ";
                cin >> p3;

                float mediaPonderada = (n1 * p1 + n2 * p2 + n3 * p3) / (float)(p1 + p2 + p3);
                cout << "A média ponderada é: " << mediaPonderada << endl;
                break;
            }

            case 3:
                cout << "Saindo do programa..." << endl;
                break;

            default:
                cout << "Opção inválida! Tente novamente." << endl;
        }

    } while (opcao != 3);

    return 0;
}