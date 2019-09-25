#include<iostream>
#include<vector>
using namespace std;
#define MAXN 2000000

int n,m;
vector<int> grafo[MAXN];
vector<int> lista;
int grau[MAXN];

int main(){
    cin>>n>>m;
    for(int i = 0;i < m;i++){
        int x,y; cin>>x>>y;
        grau[y]++;
        grafo[x].push_back(y);
    }

    for(int i = 0;i < n;i++) if(grau[i] == 0) lista.push_back(i);
    
    for(int i = 0;i < (int)lista.size();i++){
        int atual = lista[i];
        for(int j = 0;j < (int)grafo[atual].size();j++){
            int v = grafo[atual][j];
            grau[v]--;
            if(grau[v] == 0) lista.push_back(v);
        }
    }

    cout<<lista.size()<<endl;
    if((int)lista.size() < n) printf("impossivel\n");
    else{
        for(int i = 0;i < (int)lista.size();i++) printf("%d ", lista[i]);
        printf("\n");
    }

    return 0;
}