#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N1, N2, N3, menor;

    cout << "Digite o primeiro número inteiro: ";
    cin >> N1;
    cout << "Digite o segundo número inteiro: ";
    cin >> N2;
    cout << "Digite o terceiro número inteiro: ";
    cin >> N3;

    if (N1 < N2 && N1 < N3)
    {
        menor = N1;
    }
    else if (N2 < N1 && N2 < N3)
    {
        menor = N2;
    }
    else
    {
        menor = N3;
    }

    cout << "===================================================" << endl;
    cout << "O menor número inteiro digitado é " << menor << endl;

    return 0;
}
