/* 27. Leia 3 n�meros inteiros e escreva uma das seguintes mensagens:
� Todos os n�meros s�o iguais;
� Todos os n�meros s�o diferentes;
� Apenas dois n�meros s�o iguais. */

#include <iostream>

using namespace std;

int main(){
	
	int n1, n2, n3;
	
	cout << "Digite 3 numeros: ";
	cin >> n1 >> n2 >> n3;
	
	if(n1==n2 && n2==n3){
		cout << "Todos os numeros sao iguais";
	}else if(n1!=n2 && n2!=n3){
		cout << "Todos os numeros s�o diferentes";
	}else{
		cout << "Apenas 2 sao numeros iguais";
	}
}
