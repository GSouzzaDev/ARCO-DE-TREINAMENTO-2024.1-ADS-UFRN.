/*Dados tr�s valores X, Y e Z, verifique e escreva se eles podem ser os comprimentos dos lados de um
tri�ngulo e, se forem, verificar e escrever se � um tri�ngulo equil�tero, is�sceles ou escalenos. Se eles
n�o formarem um tri�ngulo, escrever esta mensagem. Considere as seguintes propriedades:
� O comprimento de cada lado em um tri�ngulo � menor que a soma dos outros dois lados;
� Equil�teros: tem os comprimentos dos tr�s lados iguais;
� Is�sceles: tem os comprimentos de dois lados iguais; � Escaleno: tem os comprimentos dos tr�s
lados diferentes.*/

#include <iostream>
using namespace std;

int main(){
	int x, y, z;
	
		cout << "\nDigite o comprimento de cada lado do triangulo:\n";
		cin >> x >> y >> z;
		
		if(x==y && y==z && x==z){
			cout << "\tSeu triangulo e equilatero, possui todos os lados iguais!";
		} else if(x!=y && y!=z && x!=z ){
			cout << "\tSeu triangulo e escaleno, nao possui nenhum lado igual!";
		}else {
			cout << "\tSeu triangulo e equilatero, possui dois lados iguais!";
		}
		
	return 0;
		
}

