#include<iostream>
#include<math.h>
using namespace std;
int main(){
    double valor;
    cin >> valor;
    double aux;

    cout<<"NOTAS:\n";
    aux = (valor - fmod(valor, 100))/100;
    cout << aux << " nota(s) de R$ 100.00\n";
    valor -= aux * 100;
    
    aux = (valor - fmod(valor, 50))/50;
    cout << aux << " nota(s) de R$ 50.00\n";
    valor -= aux * 50;

    aux = (valor - fmod(valor, 20))/20;
    cout << aux << " nota(s) de R$ 20.00\n";
    valor -= aux * 20;

    aux = (valor - fmod(valor, 10))/10;
    cout << aux << " nota(s) de R$ 10.00\n";
    valor -= aux * 10;

    aux = (valor - fmod(valor, 5))/5;
    cout << aux << " nota(s) de R$ 5.00\n";
    valor -= aux * 5;

    aux = (valor - fmod(valor, 2))/2;
    cout << aux << " nota(s) de R$ 2.00\n";
    valor -= aux * 2;

    cout << "MOEDAS:\n"; 
    valor *= 100;

    aux = (valor - fmod(valor, 100))/100;
    cout << aux << " moeda(s) de R$ 1.00\n";
    valor -= aux * 100;

    aux = (valor - fmod(valor, 50))/50;
    cout << aux << " moeda(s) de R$ 0.50\n";
    valor -= aux * 50;

    aux = (valor - fmod(valor, 25))/25;
    cout << aux << " moeda(s) de R$ 0.25\n";
    valor -= aux * 25;

    aux = (valor - fmod(valor, 10))/10;
    cout << aux << " moeda(s) de R$ 0.10\n";
    valor -= aux * 10;

    aux = (valor - fmod(valor, 5))/5;
    cout << aux << " moeda(s) de R$ 0.05\n";
    valor -= aux * 5;

    aux = (valor - fmod(valor, 1))/1;
    cout << aux << " moeda(s) de R$ 0.01\n";
    valor -= aux * 1;

    return 0;
}