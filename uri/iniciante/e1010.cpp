#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int cod1, cod2, qtd1, qtd2;
    double val1, val2;
    cin >> cod1;
    cin >> qtd1;
    cin >> val1;
    cin >> cod2;
    cin >> qtd2;
    cin >> val2;
    cout<<fixed<<setprecision(2);
    cout<<"VALOR A PAGAR: R$ "<<(qtd1 * val1 + qtd2 * val2)<<"\n";
    return 0;
}