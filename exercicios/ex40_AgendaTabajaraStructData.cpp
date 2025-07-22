/*
2. Agenda Tabajara - Faça um programa que seja uma agenda de compromissos:
- Crie e leia um vetor de 5 estruturas de dados com: compromisso e data. A data deve ser
outra estrutura de dados contendo dia, mês e ano.
- Leia dois inteiros M e A e mostre todos os compromissos do mês M do ano A. Repita o 
procedimento até que o usuário digite valor 0 para M.
*/

#include <iostream>
#include <locale.h>
using namespace std;

struct Data {
    int dia, mes, ano;
};

struct Compromisso {
    string descricao;
    Data data;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    Compromisso agenda[5];

    // Cadastro dos compromissos
    for (int i = 0; i < 5; i++) {
        cout << "\nCompromisso " << i + 1 << ":\n";
        cout << "Descrição: ";
        cin.ignore(); // limpa o buffer antes de getline
        getline(cin, agenda[i].descricao);
        cout << "Dia: ";
        cin >> agenda[i].data.dia;
        cout << "Mês: ";
        cin >> agenda[i].data.mes;
        cout << "Ano: ";
        cin >> agenda[i].data.ano;
    }

    int mesConsulta, anoConsulta;

    do {
        cout << "\nDigite o mês (0 para sair): ";
        cin >> mesConsulta;

        if (mesConsulta == 0)
            break;

        cout << "Digite o ano: ";
        cin >> anoConsulta;

        cout << "\nCompromissos para " << mesConsulta << "/" << anoConsulta << ":\n";

        bool encontrou = false;
        for (int i = 0; i < 5; i++) {
            if (agenda[i].data.mes == mesConsulta && agenda[i].data.ano == anoConsulta) {
                cout << "- " << agenda[i].descricao << " em " << agenda[i].data.dia << "/" 
                     << agenda[i].data.mes << "/" << agenda[i].data.ano << endl;
                encontrou = true;
            }
        }

        if (!encontrou) {
            cout << "Nenhum compromisso encontrado.\n";
        }

    } while (mesConsulta != 0);

    cout << "Programa encerrado.\n";

    return 0;
}