/*Uma empresa conceder� um aumento de sal�rio aos seus funcion�rios, vari�vel de acordo com o cargo,
conforme a tabela abaixo. Fa�a um algoritmo que leia o sal�rio e o c�digo do cargo de um funcion�rio e
calcule o novo sal�rio. Se o cargo do funcion�rio n�o estiver na tabela, ele dever� receber 40% de
aumento. Mostre o sal�rio antigo, o novo sal�rio e a diferen�a. 

C�DIGO CARGO PERCENTUAL
101 Gerente 10%
102 Engenheiro 20%
103 T�cnico 30% */

#include <iostream>

using namespace std;

int main(){
	int salario, total, cod, diferenca;
	
	cout << "\n\tVamos calcular o seu aumento!\n\n";
	
	cout << "\tCODIGO |   CARGO  | PERCENTUAL\n";
	cout << "\t101    |Gerente   |10%\n";
	cout << "\t102    |Engenheiro|20%\n";
	cout << "\t103    |T�cnico   |30%\n";
	
	cout << "\t--------------------------- ";
	cout << "\n\nDigite seu salario atual: ";
	cin >> salario;
	
	cout << "Digite o codigo do seu cargo: ";
	cin >> cod;
	
	if(cod==101){
		total=salario*1.1;	
		
		diferenca=total-salario;
		cout << "Seu antigo salario: " << salario << "\n";
		cout << "Seu novo salario: " <<total << "\n";
		cout << "aumento de: " << diferenca << "\n";
	}else if(cod==102){
		
		total=salario*1.2;
		diferenca=total-salario;
		cout << "Seu antigo salario: " << salario << "\n";
		cout << "Seu novo salario: " <<total << "\n";
		cout << "aumento de: " << diferenca << "\n";
	}else if(cod==103){  
	
		total=salario*1.3;
		diferenca=total-salario;
		cout << "Seu antigo salario: " << salario << "\n";
		cout << "Seu novo salario: " <<total << "\n";
		cout << "aumento de: " << diferenca << "\n";
		}else{
			
		total=salario*1.4;
		diferenca=total-salario;
		cout << "Seu antigo salario: " << salario << "\n";
		cout << "Seu novo salario: " <<total << "\n";
		cout << "aumento de: " << diferenca << "\n";
            }
    return 0;
}
