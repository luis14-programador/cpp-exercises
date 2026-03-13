#include <iostream>
using namespace std;

// Programa: Ler e mostrar 10 números
// Descrição: Lê 10 números do usuário, guarda em um vetor e depois mostra os número
// Program: Read and display 10 numbers
// Description: Reads 10 numbers from the user, stores them in an array and prints them.

int main() {
    int numero [10];

cout <<"Digite 10 numeros:" << endl;

for (int i = 0; i < 10; i++) {

    cin >> numero[i];
}

cout <<"Numeros contabilizados:" << endl;

for (int i = 0; i < 10; i++)
{
    cout << numero[i] << endl;
}

return 0;

}