/*Escreva uma fun��o que recebe dois n�meros inteiros n1 e n2 como entrada e 
retorna a soma de todos os n�meros inteiros contidos no intervalo [n1, N2]. Use est�
func�o em um programa que l� n1 e N2 do usu�rio e escreva a soma.
*/

#include <iostream>
using namespace std;

int soma(int n1, int n2);

int main(){
    int n1;
    int n2;
    int resul;
    
    cout << "\n\tDigite dois numeros\n";
    cin >> n1 >> n2;
    
    resul=soma(n1, n2);
    
    cout << "\n\tResultado da soma de " << n1 << " por " << n2 << ":\n";
    cout << resul;
}

int soma(int n1, int n2){
    int i;
    int soma=0;
    for(i=n1; i<=n2; i++){
        soma=soma+i;
    }
    
    return soma;
}
