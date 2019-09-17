#include <iostream>
#include <iomanip>
#define PI 3.14159
using namespace std;
int main()
{
    double a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << ((a * c) / 2) << "\n";
    cout << "CIRCULO: "   << (PI * (c * c)) << "\n";
    cout << "TRAPEZIO: "  << ((a + b) * c / 2) << "\n";
    cout << "QUADRADO: "  << (b * b) << "\n";
    cout << "RETANGULO: " << (a * b) << "\n";
    return 0;
}