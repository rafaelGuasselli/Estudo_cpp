#include <iostream>
#include <iomanip>
#define CACHORRO_QUENTE 4.00;
#define XSALADA 4.50;
#define XBACON 5.00;
#define TORRADA_SIMPLES 2.00;
#define REFRIGERANTE 1.50;
using namespace std;
int main()
{
    int cod, qtd;
    cin >> cod;
    cin >> qtd;
    cout << fixed << setprecision(2);
    switch (cod)
    {
    case 1:
        cout << "Total: R$ " << qtd * CACHORRO_QUENTE;
        break;
    case 2:
        cout << "Total: R$ " << qtd * XSALADA;
        break;
    case 3:
        cout << "Total: R$ " << qtd * XBACON;
        break;
    case 4:
        cout << "Total: R$ " << qtd * TORRADA_SIMPLES;
        break;
    case 5:
        cout << "Total: R$ " << qtd * REFRIGERANTE;
        break;
    }
    cout << "\n";
    return 0;
}