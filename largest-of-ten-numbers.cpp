#include <iostream>
using namespace std;

int main() {

    int numero;
    int maior;

    cout <<"Digite ate 10 numeros:"<< endl;


    cin >> numero;
    maior = numero;

        for (int i = 1; i < 10; i++)
        {
            cin >> numero;
            if (numero > maior)
            {
                maior = numero;
            }
            
        }
        cout << "O maior numero e: " << maior << endl;
        
}