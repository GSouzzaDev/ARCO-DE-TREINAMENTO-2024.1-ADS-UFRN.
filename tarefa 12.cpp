/*Leia um n�mero, verifique e escreva se este n�mero � par ou �mpar. Se for par, verifique e escreva se �
maior que 100 ou n�o e se for �mpar verifique e escreva se � positivo ou negativo.*/

#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "\t\nVamos avaliar seu numero!\n";
	cout << "Digite um numero:\n";
	cin >> num;
	
	if (num %2 == 0){
		cout << "Seu numero e par\n";
		
		if(num >=100){
			cout << "Seu numero e maior que 100!";
		}else{
			cout << "Seu numero e menor que 100!";
		}
		
	}else{
		cout << "Seu numero e impar!\n";
		
		if(num <0){
			cout << "Seu numero e menor que zero!";
		}else{
			cout << "Seu numero e maior que zero!";
		}
	}
	
}
