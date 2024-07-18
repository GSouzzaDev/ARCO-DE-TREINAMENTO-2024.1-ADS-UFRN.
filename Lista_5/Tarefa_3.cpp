/*Elabore um algoritmo que leia um vetor de 15 posi��es de n�meros inteiros e pergunte ao usu�rio quais
elementos ele deseja ver: se os elementos que est�o em �ndices pares ou se os elementos que est�o em
�ndices �mpares. Mostre somente os elementos solicitados
*/

#include <iostream>
using namespace std;

int main(){
	
	const int numeros=4;
	int valores[numeros];
	int i, cod;
	
	for(i=0; i<numeros; i++){
		cout<<"Digite o valor " << (i+1) << ": ";
		cin>>valores[i];
	}
	
	cout<<"\n\tEscolha o que ver";
	cout<<"\n\t1-Pares, 2-Impares: ";
	cin>>cod;
	
	switch(cod){
		case 1:
			for(i=0; i<numeros; i++){
				if(valores[i]%2==0){
					cout<<"\n\tValor " << (i+1) << ": " << valores[i];
				}
		    }
		break; 
		
		case 2:
			for(i=0; i<numeros; i++){
				if(valores[i]%2!=0){
					cout<<"\n\tValor " << (i+1) << ": " << valores[i];
				}
		    }
		break;
		default:
			cout<<"C�digo invalido." ;
	}  
	
}
