/* 31. Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a
aplica��o de multas de tr�nsito. O algoritmo deve ler as seguintes informa��es para cada um dos N
motoristas:
- O n�mero da carteira de motorista (inteiro);
- N�mero de multas;
- O valor de cada uma das multas.
Deve ser impresso o valor da d�vida de cada motorista e ao final da leitura o total de recursos arrecadados
(somat�rio de todas as multas). O algoritmo dever� imprimir tamb�m o n�mero da carteira do motorista
que obteve o maior n�mero de multas. */

#include <iostream>
using namespace std;

int main() {
    int numCarteira, numMultas, motoristas;
    float multa, totalArrecadado = 0, maiorNumMultas = 0;
    int numCarteiraMaiorMultas = 0;

    cout << "Digite o n�mero de motoristas: ";
    cin >> motoristas;

    for (int i = 0; i < motoristas; i++) {
        cout << "Digite o n�mero da carteira do motorista: ";
        cin >> numCarteira;

        cout << "Digite o n�mero de multas: ";
        cin >> numMultas;

        float totalMultasMotorista = 0;

        for (int j = 0; j < numMultas; j++) {
            cout << "Digite o valor da multa " << j + 1 << ": ";
            cin >> multa;
            totalMultasMotorista += multa;
        }

        cout << "D�vida do motorista (carteira " << numCarteira << "): " << totalMultasMotorista << endl;

        totalArrecadado += totalMultasMotorista;

        if (numMultas > maiorNumMultas) {
            maiorNumMultas = numMultas;
            numCarteiraMaiorMultas = numCarteira;
        }
    }

    cout << "Total arrecadado: " << totalArrecadado << endl;
    cout << "N�mero da carteira do motorista com mais multas: " << numCarteiraMaiorMultas << endl;

    return 0;
}


