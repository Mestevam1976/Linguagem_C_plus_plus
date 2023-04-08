#include <iostream>

using namespace std;

int main()
{
    int N, negativos;

    cout << "Qual a ordem da Matriz? " << endl;
    cin >> N;

    int mat[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "Elemento [" << i << "," << j << "]: ";
            cin >> mat[i][j];
        }
    }

    cout << "DIAGONAL PRINCIPAL:" << endl;
    for (int i = 0; i < N; i++)
    {
        cout << mat[i][i] << " ";
    }

    cout << endl;

    negativos = 0;

    cout << "QUANTIDADE DE NÚMEROS NEGATIVOS: " << endl;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (mat[i][j] < 0)
            {
                negativos++;
            }
        }
    }

    cout << negativos << endl;

    return 0;
}
