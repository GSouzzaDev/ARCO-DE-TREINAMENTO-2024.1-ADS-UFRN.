/*Elabore um algoritmo que leia um vetor de 15
 posi��es de n�meros inteiros e pergunte ao
  usu�rio quais 
elementos ele deseja ver: se os elementos que est�o
 em �ndices pares ou se os elementos que est�o em 
�ndices �mpares. Mostre somente os elementos
 solicitados. */
 
 #include <iostream>
 
 using namespace std;
 
 int main(){
     int num[14], dec, i;
     
     for(i=0; i<15; i++){
         cout << "\n\tDigite um numero" << endl;
         cin >> num[i];
     }
     
     cout << "\nDeseja ver os n�meros pares ou �mpares? " << endl;
     
     cout << "1-pares, 2-impares\n\t" << endl;
     cin >> dec;
     
     if(dec==1){
         for(i=0; i<15; i++){
             if(num[i]%2==0){
                 cout << num[i] << "\n\t" << endl;
             }
         }
     }
     
     if(dec==2){
         for(i=0; i<15; i++){
             if(num[i]%2!=0){
                 cout << num[i] << "\n\t" << endl;
             }
         }
     }
 }
