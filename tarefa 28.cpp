/* 28. Calcule as ra�zes de uma equa��o de 2� grau. Observe que:
� x = -b � v?/2a, onde ? = B2 - 4ac;
� ax2 + bx + c = 0 representa uma equa��o de 2� grau;
� A vari�vel a tem que ser diferente de zero. Caso seja igual, escreva a mensagem �N�o � equa��o de
segundo grau�;
� Se ? < 0, n�o existe real. Escreva a mensagem �N�o existe raiz�;
� Se ? = 0, existe uma raiz real. Escreva a raiz e a mensagem �Raiz �nica�;
� Se ? = 0, escreva as duas ra�zes reais.*/

#include <iostream>

using namespace std;

int main() {
    float a, b, c, raiz, raiz1, raiz2, discriminante;
    
    cout << "Digite os coeficientes da equa��o de segundo grau (ax^2 + bx + c = 0):" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    
    if (a == 0) {
        cout << "N�o � uma equa��o de segundo grau." << endl;
    } else {
        // Calcula o discriminante
        discriminante = b * b - 4 * a * c;

        
        if (discriminante < 0) {
            cout << "N�o existe raiz real." << endl;
        } else if (discriminante == 0) {
            
            raiz = -b / (2 * a);
            cout << "Raiz �nica: " << raiz << endl;
        } else {
           
            raiz1 = (-b + discriminante) / (2 * a);
            raiz2 = (-b - discriminante) / (2 * a);
            cout << "As ra�zes s�o: " << raiz1 << " e " << raiz2 << endl;
        }
    }

    return 0;
}
