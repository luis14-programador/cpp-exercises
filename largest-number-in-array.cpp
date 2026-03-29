#include <iostream>
using namespace std;

// Program: Largest number in array
// Description: Reads 10 numbers and prints the largest.

int main(){

    int numero[10];
    int numeromaior;

    cout <<"Diga 10 numeros:" << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cin >> numero[i];
    }
    
    numeromaior = numero[0];

    for (size_t i = 1; i < 10; i++)
    {
        if (numero[i] > numeromaior)
        {
            numeromaior = numero[i];
        }
        
    }

     cout << "--------------------" << endl;
     cout << "O maior numero e: "  << numeromaior << endl;
     cout << "-------------------- " << endl;

     return 0;
}