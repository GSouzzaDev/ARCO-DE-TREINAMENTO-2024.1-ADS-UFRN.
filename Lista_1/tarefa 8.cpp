/*Escreva o valor em reais (R$) de um valor lido em d�lares (US$). O algoritmo dever� solicitar o
valor da cota��o do d�lar e tamb�m a quantidade de d�lares que o usu�rio deseja converter.*/

#include <iostream>

using namespace std;

int main(){
	int reais, dolar, cotacao;
	
	cout <<"!CONVERTA SEUS DOLARES EM REAIS!\n";
	
    cout << "Digite o valor que deseja converter: ";
	cin >> dolar;
	
	cout << "Digite a cota��o do dolar: ";
	cin >> cotacao;
	
	reais=dolar/cotacao;
	
	cout << "O valor em real �: " << reais;
	
	return 0;
} 
