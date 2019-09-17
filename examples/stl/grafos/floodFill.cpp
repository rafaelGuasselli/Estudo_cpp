#include <iostream>
#include <vector>
#define MAXN 50050
using namespace std;

//Union find em forma de grafos

int n, m;//n quantidade de vertices, m quantidade de arestas
int pai[MAXN];//Mesmo do union find
vector<int> lista[MAXN];//Lista adjacente que representa os grafos

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
    for(int i = 1;i <= n;i++) pai[i] = -1; // inicializamos as componentes
    for(int i = 1;i <= m;i++){
        int a, b;
        cin >> a >> b;
        // adicionamos cada um a lista do outro
        lista[a].push_back(b);
        lista[b].push_back(a);
    }
    
    int numero_f = 0;
    for(int i = 0;i < n;i++){
        if(pai[i] == -1){ // i ainda não tem componente
            // começaremos uma dfs a partir de i
            // assim, i será o começo de uma nova componente
            numero_f++;
            pai[i] = numero_f;
            dfs(i);
        }
    }
    cout<<numero_f<<endl;
    return 0;
}