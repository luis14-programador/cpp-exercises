#include <iostream>
#include <string>
using namespace std;

int main(){

    string amigos [10];

    cout <<"Digite o nome de 10 amigos:" << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cin >> amigos[i];
    }

    cout <<"Esses sao os nomes dos seus amigos: " << endl;

    for (size_t i = 0; i < 10; i++)
    {
        cout << amigos[i];

        if (i < 9 )
        {
            cout << ", " << endl;
        }
        
    }

    return 0;
}
