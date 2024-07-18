/*Elabore um algoritmo que leia 20 elementos de um vetor de inteiros e, em seguida, um valor de c�digo. Se o
c�digo for 1, mostrar o vetor na ordem direta(do primeiro at� o �ltimo); se o c�digo for 2, mostrar ovetor
na ordem inversa(do �ltimo at� o primeiro)
*/

#include <iostream>
using namespace std;

int main(){
	
	const int numeros=20;
	int valores[numeros];
	int i, cod;
	
	for(i=0; i<numeros; i++){
		cout<<"Digite o valor " << (i+1) << ": ";
		cin>>valores[i];
	}
	
	cout<<"\n\tEscolha a ordem";
	cout<<"\n\t1-inversa, 2-direta: ";
	cin>>cod;
	
	switch(cod){
		case 1:
			for(i=(numeros-1);i>=0;i--){
			cout<<"\n\tValor " << (i+1)<< ": " << valores[i];
	      	}
		break; 
		
		case 2:
			for(i=0; i<numeros; i++){
			cout<<"\n\tValor " << (i+1) << ": " << valores[i];
		    }
		break;
		default:
			cout<<"C�digo invalido." ;
	}  
	
}
