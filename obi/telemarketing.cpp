#include<iostream>
#include<stack>
#include<string>
using namespace std;
#define MAXN 1000
int v,t;
stack<int> ligacoes;
int vendedor[MAXN];
int cont[MAXN];
int main(){
    cin>>v>>t;
    int aux;
    for(int i = 0;i < t;i++) {cin>>aux; ligacoes.push(aux);}
    for(int i = 0;!ligacoes.empty();i = (i+1) % v){
        if(vendedor[i] == 0){
            vendedor[i] = ligacoes.top();
            ligacoes.pop();
            cont[i]++;
        }
        vendedor[i]--;
    }

    for(int i = 0;i < v;i++) cout<<(i+1)<<" "<<cont[i]<<endl;
}