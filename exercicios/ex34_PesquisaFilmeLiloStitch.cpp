/* 
Elabore um programa que permita uma pesquisa sobre o filme Lilo & Stitch - ano 2025.
Consulte 20 pesquisas e no final indique:
1- Quantas pessoas do sexo masculino responderam a pesquisa;
2- Quantas pessoas do sexo masculino responderam que o filme � �timo;
3- Quantas pessoas entre 18 e 25 anos responderam que o filme � bom;
4- Quantas pessoas responderam que n�o viram o filme;
5- Quantas pessoas entre 12 e 17 anos responderam que o filme � ruim;
*/

#include <iostream>
using namespace std;

int main()
{
    // Vari�veis para contar as respostas conforme as condi��es
    int total_masculino = 0;
    int masculino_otimo = 0;
    int entre_18_25_bom = 0;
    int nao_viram = 0;
    int entre_12_17_ruim = 0;

    for (int i = 1; i <= 20; i++) {
        cout << "Pesquisa #" << i << endl;

        // Dados do entrevistado
        char sexo;
        int idade;
        int opiniao;

        // Entrada sexo
        do {
            cout << "Informe o sexo (M/F): ";
            cin >> sexo;
            sexo = toupper(sexo);
        } while (sexo != 'M' && sexo != 'F');

        // Entrada idade
        do {
            cout << "Informe a idade: ";
            cin >> idade;
        } while (idade < 0);

        // Entrada opini�o sobre o filme
        cout << "Opini�o sobre o filme:\n";
        cout << "1 - �timo\n";
        cout << "2 - Bom\n";
        cout << "3 - Ruim\n";
        cout << "4 - N�o viu\n";
        do {
            cout << "Digite sua op��o (1-4): ";
            cin >> opiniao;
        } while (opiniao < 1 || opiniao > 4);

        // Contabilizar conforme as condi��es

        if (sexo == 'M') {
            total_masculino++;
            if (opiniao == 1) // �timo
                masculino_otimo++;
        }

        if (idade >= 18 && idade <= 25 && opiniao == 2) // entre 18 e 25 e bom
            entre_18_25_bom++;

        if (opiniao == 4) // n�o viu
            nao_viram++;

        if (idade >= 12 && idade <= 17 && opiniao == 3) // entre 12 e 17 e ruim
            entre_12_17_ruim++;

        cout << endl;
    }

    // Resultados
    cout << "\nResultados da pesquisa:\n";
    cout << "1 - Pessoas do sexo masculino que responderam: " << total_masculino << endl;
    cout << "2 - Pessoas do sexo masculino que responderam que o filme � �timo: " << masculino_otimo << endl;
    cout << "3 - Pessoas entre 18 e 25 anos que responderam que o filme � bom: " << entre_18_25_bom << endl;
    cout << "4 - Pessoas que responderam que n�o viram o filme: " << nao_viram << endl;
    cout << "5 - Pessoas entre 12 e 17 anos que responderam que o filme � ruim: " << entre_12_17_ruim << endl;

    return 0;
}