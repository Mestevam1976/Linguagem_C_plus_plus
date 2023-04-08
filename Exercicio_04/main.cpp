#include <bits/stdc++.h>

using namespace std;

int main()
{
    int X, Y;

    cout << "Digite dois números inteiros distintos" << endl;
    cout << "(para finalizar digite dois números iguais): " << endl;
    cin >> X  >> Y;

    while (X != Y)
    {
        if ( X < Y)
        {
            cout << "OS NÚMEROS ESTÃO EM ORDEM CRESCENTE" << endl;
        }
        else
        {
            cout << "OS NÚMEROS ESTÃO EM ORDEM DECRESCENTE" << endl;
        }
        cout << "Digite outros dois números: " << endl;
        cin >> X >> Y;
    }
    cout << "VOCÊ DIGITOU DOIS NÚMEROS IGUAIS - FIM DO PROGRAMA" << endl;

    return 0;
}
