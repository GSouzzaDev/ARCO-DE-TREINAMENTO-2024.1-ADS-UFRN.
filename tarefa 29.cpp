/* 29. Leia a idade de uma pessoa e escreva se ela j� tem idade para tirar carteira de habilita��o (18 anos
completos) ou n�o. Se n�o tiver idade, escreva tamb�m quantos anos faltam para que possa tirar a
carteira.*/

#include <iostream>

using namespace std;

int main(){
	
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if(idade>=18){
		cout<< "Voce ja tem idade para tirar a carteira de motorista";
	}else{
		idade=18-idade;
		cout<<"Faltam " << idade << " anos para voce conseguir tirar a carteira";
	}
} 
