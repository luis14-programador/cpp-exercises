#include <iostream>
#include <string>
using namespace std;

int main(){

    string nomes [10];
    string maiornome;

    cout <<"Digite 10 nomes:" << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cin >> nomes[i];
    }
    
    maiornome = nomes[0];

    for (size_t i = 0; i < 10; i++)
    {
        if (nomes[i].length() > maiornome.length())
{
    maiornome = nomes[i];
}
    }
    
    cout << "\n";
    cout << "========================" << endl;
    cout << "Resultado:" << endl;
    cout << "O maior nome e: " << maiornome << endl;
    cout << "========================" << endl;

    return 0;
}