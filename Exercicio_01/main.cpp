/*#include <iostream>
#include <cmath>
#include <iomanip>*/
#include <bits/stdc++.h> /* Essa biblioteca engloba todas as principais */

using namespace std;

int main()
{
    double base, altura, area, perimetro, diagonal;

    cout << "Base do Retângulo: ";
    cin >> base;
    cout << "Altura do Retângulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal = sqrt(pow(base, 2.0) + pow(altura, 2.0));

    cout << fixed << setprecision(4);
    cout << "AREA: " << area << endl;
    cout << "PERIMETRO:" << perimetro << endl;
    cout << "DIAGONAL: " << diagonal << endl;

    return 0;
}
