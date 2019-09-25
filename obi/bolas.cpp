#include<iostream>
using namespace std;
#define MAXN 8

int bolas[MAXN];

int main(){
    for(int i = 0;i < MAXN;i++) cin>>bolas[i];

    for(int i = 0;i < MAXN;i++){
        int qtd = 0;
        int atual = bolas[i];
        for(int j = 0;j < MAXN;j++){
            if(i == j) continue;
            if(atual == bolas[j]){
                qtd++;
            }
            if(qtd >= 4){
                cout<<"N"<<endl;
                return 0;
            }
        }   
    }  
    cout<<"S"<<endl;  
    return 0;
}