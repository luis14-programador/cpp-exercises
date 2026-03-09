#include <iostream>
using namespace std;

int main(){

int numero1;
int numero2;
int numero3;

cout <<"Digite três números:";

cin >> numero1;
cin >> numero2;
cin >> numero3;

int maior;

maior = numero1;

if (numero1 < numero2)
{
    maior = numero2;
}

if (numero3 > maior)
{
    maior = numero3;
}

cout << "O maior numero é: " << maior;

}
