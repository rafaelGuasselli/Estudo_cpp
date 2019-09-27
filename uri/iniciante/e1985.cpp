#include<iostream>
#include<iomanip>
using namespace std;
#define preco 999.5
int n;
int p,qtd;
float out = 0;
int main(){
    cin>>n;
    cout<<fixed;
    cout<<setprecision(2);
    while(n>0){
        cin>>p>>qtd;
        out += (p - preco) * qtd;
        n--;
    }
    cout<<out<<endl;
    return 0;
}