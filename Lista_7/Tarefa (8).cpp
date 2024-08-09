/*Escreva uma fun��o que determine a m�dia e a situa��o de um aluno em uma 
disciplina. A fun��o recebe como par�metros as tr�s notas de um aluno (p1, p2, e p3),
seu n�mero de faltas (faltas), o n�mero total de aulas da disciplina (aulas) e o ponteiro
para uma vari�vel (media), conforme a seguinte assinatura:
char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media); Na
vari�vel indicada pelo ponteiro media, a fun��o deve armazenar a m�dia do aluno, 
calculada como a m�dia aritm�tica das tr�s provas. Al�m disso, a fun��o deve retornar 
um caractere indicando a situa��o do aluno no curso, definido de acordo com o seguinte
crit�rio

|------------------|------------------|------------------|------------------|
| N�mero de Faltas |      M�dia       |     Situa��o     |      Retorno     |
|------------------|------------------|------------------|------------------|
|Menor ou igual a  |Maior ou igual a 6|Aprovado          |        A         |
|25% do total de.  |------------------|------------------|------------------|
|aulas.            |Menor que 6       |Reprovado         |        R         |
|------------------|------------------|------------------|------------------|
|Maior que 25% do  |Qualquer          |Reprovado por     |        F         |
|total de aulas    |                  |faltas            |                  |
|------------------|------------------|------------------|------------------|

Em seguida, escreva a fun��o principal de um programa que utiliza a fun��o anterior
para determinar a situa��o de um aluno. O programa deve:
-   Ler do teclado tr�s n�meros reais e dois n�meros inteiros, representando as
notas da p1, p2 e p3, o n�mero de faltas e o n�mero de aulas, respectivamente; 
-   Chamar a fun��o desenvolvida na primeira quest�o para determinar a m�dia e a
situa��o do aluno na disciplina; 
-   Exibir a m�dia (com apenas uma casa decimal) e a situa��o do aluno, isto �,
"APROVADO", "REPROVADO" ou "REPROVADO POR FALTAS", dependendo do caractere,
retornado pela fun��o, conforme a tabela acima.
*/

#include <iostream>
using namespace std;

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);

int main() {
    float n1;
    float n2;
    float n3;
    int aulas;
    int faltas;
    float med;
    char s;
    
    cout << "\n\tDigite suas 3 notas, respectivamente: ";
    cin >> n1 >> n2 >> n3;
    
    cout << "\n\tDigite o n�mero de aulas: ";
    cin >> aulas;
    
    cout << "\n\tDigite o n�mero de faltas: ";
    cin >> faltas;
    
    s=situacao(n1, n2, n3, aulas, faltas, &med);
    cout << "\n\tSua media foi: " << med;
    cout << "\n\tA-aprovado";
    cout << "\n\tR-Reprovado";
    cout << "\n\tF-Reprovado por faltas";
    cout << "\n\tSituacao: " << s;
}

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
    int por;
    char ret;
    *media=(p1+p2+p3)/3;
    
    por=aulas/faltas;
    
    if(por<=25){
        if(*media>=6){
            ret='A';
        }else{
            ret='R';    
        }
    }else{
        ret='F';
    }
    
    return ret;
}
