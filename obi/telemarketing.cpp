#include<iostream>
#include<queue>
using namespace std;
#define MAXN 1000

int v,t;
queue<int> ligacoes;
int vendedor[MAXN];
int cont[MAXN];

int main(){
    cin>>v>>t;
    int aux;
    for(int i = 0;i < t;i++) {cin>>aux; ligacoes.push(aux);}

    for(int i = 0;i < v;i = (i+1)%v){
        if(ligacoes.empty()) break;
        if(vendedor[i] <= 0){
            vendedor[i] += ligacoes.front();
            ligacoes.pop();
            cont[i]++;
        }
        vendedor[i]--;
    }

    for(int i = 0;i < v;i++) cout<<(i+1)<<" "<<cont[i]<<endl;
}