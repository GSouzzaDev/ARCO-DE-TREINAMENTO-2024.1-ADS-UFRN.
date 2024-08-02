/*Dado um n�mero n inteiro e positivo, dizemos que n � perfeito se n for igual � soma de seus divisores
positivos diferentes de n. Construa um programa em C que verifica se um dado n�mero � perfeito. Ex: 6
� perfeito, pois 1+2+3 = 6. 
*/


#include  <iostream>

using namespace std;

int main(){
	
	int num, divisor, soma=0;
	
	cout <<"Digite um numero: ";
	cin >> num; 
	
	for(divisor=1; divisor<num; divisor++){
		if(num%divisor==0){
			soma+=divisor;
		}
	}
	
	if(soma==num){
		cout << "E perfeito";
	}else{
		cout << "Nao e perfeito";
	}
}
  

