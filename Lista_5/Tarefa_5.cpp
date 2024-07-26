/*Elabore um algoritmo que leia um vetor A de 20 posi��es. Em seguida, trocar(armazenando em um novo
vetor B) o pirmeiro elemento com o �ltimo, o segundo com o pen�ltimo, o terceiro com o antepen�ltimo, e
assim sucessivamente. Ao final, escreva os vetores A e B.
*/

#include <iostream>
using namespace std; 

int main(){
	 
	 const int tamanho = 20;
	 int vetor[tamanho];
	 int vetorB[tamanho];
	 int i;
	 int u;
	 
	 for(i=0; i<tamanho; i++){
        cout << "\n\tDigite o vetor " << (i+1) << ": ";
        cin >> vetor[i];
	}
	
	for(i=0; i<=tamanho; i++){
		u=5;
		vetorB[u]=vetor[i];
		cout<<"\n\n\n\tValor: " << vetorB[u];
		u--;
		
	}
	
	for(i=0; i<tamanho; i++){
		cout << "\n\n\tVetor A, posi��o " << (i+1) << ": "<< vetor[i];
	}
	
	cout<<"\n\n\t===========================================================";
	cout <<"\n\tTrocando as posi��es com o vetor B, em ordem inversa...";
	cout<<"\n\t===========================================================\n\t";
	
	for(u=5; u>=0; u--){
		for(i=0; i<=tamanho; i++){
    		cout << "\n\n\tVetor B, posi��o " << (i+1) << ": " << vetor[u];
    	
		}
	}	
}
