#include<iostream>
using namespace std;
#define quantidadeNotas 6
int n,m;
int atual;
int notas[] = {100, 50, 20, 10, 5, 2};
int main(){
    while(true){
        cin>>n>>m;
        atual = (m - n);
        if(n == m && m == 0) break;
        int cont = 0;
        for(int i = 0;i < quantidadeNotas;i++){
            if((atual - notas[i]) >= 0){
                atual -= notas[i];
                cont++;
            }
        }
        if(cont == 2 && atual == 0) cout<<"possible"<<endl;
        else cout<<"impossible"<<endl;
    }
    return 0;
}