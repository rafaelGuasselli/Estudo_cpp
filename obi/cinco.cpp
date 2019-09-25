#include<iostream>
using namespace std;
#define MAXN 1000

int n;
int numero[MAXN];
int maior[MAXN];
bool foi = false;

void troca(int i, int j){
    int aux = numero[i];
    numero[i] = numero[j];
    numero[j] = aux;
}

void substitui(){
    for(int i = 0;i < n;i++){
        maior[i] = numero[i];
    }
    foi = true;
}

void compara (){
    for(int i = 0;i < n;i++){
        if(numero[i] > maior[i]){
            substitui();
            break;
        }if(numero[i] == maior[i]) continue;
        else{
            break;
        }
    }
}

int main(){
    cin>>n;
    for(int i = 0;i < n;i++) {cin>>numero[i]; maior[i] = 0;}
    for(int i = 0;i < n;i++){   
        if(numero[i] == 0 || numero[i] == 5){
            troca(i, n - 1);
            compara();
            troca(i, n - 1);
        }
    }
    if(foi){
        for(int i = 0;i < n;i++){
            cout<<maior[i]<<" ";
        }
    }else{
        cout<<"-1"<<endl;
    }
    cout<<endl;
    return 0;
}