#include <iostream>
#include <vector>
#define MAXN 50050
using namespace std;

//Union find em forma de grafos

int n, m, numero_f;//vertices, arestas
int pai[MAXN];//Mesmo do union find
vector<int> lista[MAXN];//Lista adjacente que representa os grafos

void dfsInit(){
    for(int i = 0;i < n;i++) pai[i] = -1; // inicializamos as componentes
    numero_f = 0;
    for(int i = 0;i < n;i++){
        if(pai[i] == -1){
            numero_f++;
            pai[i] = numero_f;
            dfs(i);
        }
    }
}

void dfs(int x){
    //Percorre todos os vizinhos
    for(int i = 0;i < (int)lista[x].size();i++){
        int v = lista[x][i];
        if(pai[v] == -1){ // checamos se V ainda não foi visitado
            pai[v] = pai[x];
            dfs(v);
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0;i < m;i++){
        int a, b;
        cin >> a >> b;
        // adicionamos cada um a lista do outro
        lista[a].push_back(b);
        lista[b].push_back(a);
    }
    dfsInit();
    return 0;
}