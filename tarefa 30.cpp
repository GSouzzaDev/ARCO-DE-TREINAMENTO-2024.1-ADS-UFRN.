/* 30. Leia um n�mero qualquer e verifique se ele � par ou �mpar. Se o n�mero for par, escreva se � m�ltiplo
de 10; se for �mpar, escreva se � divis�vel por 5. */

#include <iostream>

using namespace std;

int main(){
	
	int num;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	if(num%2==0){
		cout << "Seu numero e par";
			if(num%10==0){
				cout<<"Seu numero e multiplo de 10";
			}
	}else{
		cout<<"Seu numero e impar";
		
		if(num%5==0){
			cout<<"Seu numero e divisivel por 5";
		}
	}
	
}
