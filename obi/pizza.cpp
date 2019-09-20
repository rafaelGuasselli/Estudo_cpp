#include<iostream>
using namespace std;
#define MAXN 100000

int n;
int diferenca[MAXN];
int main(){
    cin>>n;
    for(int i = 0;i < n;i++) cin>>diferenca[i];

    int maior = 0;
    for(int i = 0;i < n;i++){
        int cont = 0;
        int soma = 0;
        for(int j = i;cont < n;j = (j+1) % n){
            if(soma > maior){maior = soma;}
            soma += diferenca[j];
            cont++;
        }
    }
    cout<<maior<<endl;
    return 0;
}
