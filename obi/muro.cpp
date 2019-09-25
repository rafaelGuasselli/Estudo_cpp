#include<iostream>
#include<math.h>
using namespace std;
#define MAXN 20000

int n;
int fatorial[MAXN];
int fat(int i){
    if(fatorial[i]>1) return fatorial[i];
    if(i == 0) return 1;
    if(i == 1) return 1;
    return i * fat(i - 1); 
}
int main(){
    cin>>n;
    n *= 2;
    int qtd3 = floor(n/3)*3;
    int qtd1 = n % 3;
    if(qtd3 == 0){cout<<"1"<<endl; return 0;}
    int out = fat(n)/(fat(n-qtd3)*fat(qtd3-qtd1)) + 1;
    cout<<(out % (1000000000+7))<<endl;
    return 0;
}