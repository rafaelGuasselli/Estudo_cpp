#include <iostream>
using namespace std;
int main()
{
    int par[5];
    int impar[5];

    int contP = 0;
    int contI = 0;
    for (int i = 0; i < 15; i++)
    {
        int num;
        cin >> num;
        if (num % 2 == 0){
            par[contP] = num;
            contP++;
        }
        else{
            impar[contI] = num;
            contI++;
        }

        if (contP == 5){
            for (int a = 0; a < 5; a++){
                cout << "par[" << a << "] = " << par[a] << "\n";
            }
            contP = 0;
        }
        if (contI == 5){
            for (int a = 0; a < 5; a++){
                cout << "impar[" << a << "] = " << impar[a] << "\n";
            }
            contI = 0;
        }
    }

    if (contI > 0){
        for (int a = 0; a < contI; a++){
            cout << "impar[" << a << "] = " << impar[a] << "\n";
        }
    }

    if (contP > 0){
        for (int a = 0; a < contP; a++){
            cout << "par[" << a << "] = " << par[a] << "\n";
        }
    }
    return 0;
}