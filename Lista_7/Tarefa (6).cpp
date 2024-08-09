/*Elaborar um algoritmo que leia um vetor de 10 posi��es de inteiros e chame uma 
fun��o MinMax est� func�o deve receber o valor lido, e por refer�ncia, duas vari�veis
inteiras, mim e max. O objetivo da fun��o � buscar os valores do menor e maior
elementos do vetor e atribuir as vari�veis mim e max, respectivamente.
*/
#include<iostream>
using namespace std;

void MinMax(int V[10], int &mim, int &max);

int main()
{
    const int tamanho =10;
    int V[tamanho];
    int mim;
    int max;
    int i;
    
    for(i=0; i<tamanho; i++){
        cout << "\n\tValor " << i+1 << ": ";
        cin >> V[i];
    }
    MinMax(V, mim, max);
    
    cout << "\n\tValor minimo da funcao: " << mim;
    cout << "\n\tValor maximo da funcao: " << max;
    
    return 0;
}

void MinMax(int V[10], int &mim, int &max){
    int i;
    int maior=0;
    for(i=0; i<10; i++){
        if(i==0){
        mim=V[i];
        }
        if(V[i]<mim){
        mim=V[i];
        }else if(V[i]>maior && V[i]!=mim){
            maior=V[i];
            max=maior;
        }
        
    }
}
