/*
Elabore um algoritimo que leia dois vetores de 10 posi��es e fa�a a multiplica��o dos elementos de mesmo
�ndice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante
*/

#include <iostream>
using namespace std;

int main(){
	const int tamanho=4;
	int vetorA[tamanho];
	int vetorB[tamanho];
	int vetorC[tamanho];
	int i=0;
	
	cout << "Digite os primeiros valores: ";
	for(i=0; i<tamanho; i++){
		cout << "Numero " << (i+1) << ": ";
		cin >> vetorA[i];
	}
	
	cout << "Digite os segundos valores: ";
	for(i=0; i<tamanho; i++){
		cout << "Numero " << (i+1) << ": ";
		cin >> vetorB[i];
	}
	
	cout << "Multiplicando cada �ndice..";
	
	for(i=0; i<tamanho; i++){
		vetorC[i]=vetorA[i]*vetorB[i];
		cout << "\n\n\tMultiplica��o de " << vetorA[i] << " por " << vetorB[i];
		cout << "\tResultado: " <<vetorC[i];
	}
}
