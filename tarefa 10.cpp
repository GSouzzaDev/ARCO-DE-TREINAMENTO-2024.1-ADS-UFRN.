/*Leia dois valores inteiros para as vari�veis A e B e efetue as opera��es de adi��o, subtra��o,
multiplica��o e divis�o de A por B, apresentando ao final os resultados obtidos. Em seguida leia
dois valores l�gicos C e D e efetue as opera��es de nega��o (de cada um dos valores), conjun��o
(E) e disjun��o (OU), apresentando ao final os resultados obtidos.*/

#include <iostream>

using namespace std;

int main()[
  int A, B, adicao, subtracao, multiplicacao, divisao;
  boll C, D;
  
  cout << "Digite dois valores e veja as opera��es basicas com eles: \n";
  cin >> A >> B;
  
  adicao = A+B;
  subtracao= A-B;
  multiplicacao= A*B;
  divisao= A/B;
  
  cout << "A adicao entre " << A << " e " << B << " e: " << adicao;
  cout << "A subtracao entre " << A << " e " << B << " e: " << subtracao;
  cout << "A multiplicacao entre " << A << " e " << B << " e: " << multiplicacao;
  cout << "A divisao entre " << A << " e " << B << " e: " << divisao;
  
  cout << "Digite dois valores l�gicos para C e D (0 para falso, qualquer outro n�mero para verdadeiro): ";
    cin >> C >> D; 
    
    bool notC = !C;
    bool notD = !D;
    bool conjuncao = C && D;
    bool disjuncao = C || D;

    cout << "Nega��o de C: " << notC << endl;
    cout << "Nega��o de D: " << notD << endl;
    cout << "Conjun��o (C E D): " << conjuncao << endl;
    cout << "Disjun��o (C OU D): " << disjuncao << endl;

    return 0;
}
  

] 
