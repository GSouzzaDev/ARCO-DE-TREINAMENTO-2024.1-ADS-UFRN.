/*Fa�a um algoritmo que leia as matr�culas e as respectivas m�dias finais de v�rios alunos de uma turma,
at� que seja digitada uma m�dia negativa. Ao final, o algoritmo deve mostrar a quantidade de alunos
aprovados (m�dia >=7), reprovados (m�dia <3) ou em recupera��o. Al�m disso, o algoritmo deve mostrar
as matr�culas do aluno de maior media. */


#include <iostream>

using namespace std;

int main(){
	
	int aprovados=0, recuperacao=0, reprovados=0, maioresmatriculas=0, matricula;
	float nota;
	do{
	cout << "Digite sua matricula: ";
	cin >> matricula;
	
	cout << "Digite sua media: ";
	cin >> nota;
	
	
		if(nota>=7){
			aprovados++;
			if(nota>maioresmatriculas){
				maioresmatriculas=matricula;
			}
		} else if(nota<3){
			reprovados++;
		}else{
			recuperacao++;
		}
	}while(nota!=0);
	
	cout << "Aprovados : " << aprovados;
	cout << "Em recuperacao : " << recuperacao;
	cout << "Reprovados : " << reprovados;
	cout << "Matr. com maiores notas : " << maioresmatriculas;
}



