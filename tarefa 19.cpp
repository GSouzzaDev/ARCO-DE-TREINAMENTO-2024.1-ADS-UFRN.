/*19. Crie um programa que exibe se um dia � dia �til, fim de semana ou dia inv�lido dado o n�mero referente
ao dia. Considere que domingo � o dia 1 e s�bado � o dia 7.*/

 #include <iostream> 
 using namespace std;
 
 int main(){
 	
	int dia;
	
	cout << "Digite um dia da semana(1-7): ";
	cin >> dia;
	
	if(dia>7 || dia<1){
		cout << "Dia invalido";
	}
	if(dia==1 || dia==7){
		cout <<"Fim de semana";
	}else if(dia>1 && dia<7){
		cout <<"Dia util";
	}
	
 }
