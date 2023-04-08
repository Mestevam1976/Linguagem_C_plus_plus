#include <bits/stdc++.h>

using namespace std;

int main()
{
    string nome1, nome2;
    int idade1, idade2;
    double media;

    cout << "DADOS DA PRIMEIRA PESSOA: " << endl;
    cout << "Digite o nome completo da primeira pessoa: ";
    getline(cin, nome1);
    cout << "Informe a idade da primeira pessoa: ";
    cin >> idade1;

    cout << "DADOS DA SEGUNDA PESSOA: " << endl;
    cout << "Digite o nome completo da segunda pessoa: ";
    cin.ignore(INT_MAX, '\n'); /* COMANDO PARA LIMPEZA DE BUFFER */
    getline(cin, nome2);
    cout << "Informe a idade da segunda pessoa: ";
    cin >> idade2;

    media = (idade1 + idade2) / 2.0;

    cout << fixed << setprecision(1);
    cout << "A média de idade entre " << nome1 << " e " << nome2 << " é de " << media << " anos" << endl;


    return 0;
}
