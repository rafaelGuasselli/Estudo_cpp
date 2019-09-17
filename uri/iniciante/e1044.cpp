#include <iostream>
using namespace std;

int calc(int a, int b)
{
    if (a > b)
    {
        return a % b;
    }
    else if (a == b)
    {
        return 0;
    }
    else
    {
        return b % a;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;

    if (calc(a, b) == 0)
    {
        cout << "Sao Multiplos\n";
    }
    else
    {
        cout << "Nao sao Multiplos\n";
    }
}
