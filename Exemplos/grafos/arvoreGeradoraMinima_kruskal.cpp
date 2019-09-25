#include<iostream>
#include<algorithm>
using namespace std;
#define MAXN 2000000
struct aresta{int dist,x,y;};

int m,n;
aresta arestas[MAXN];
aresta mst[MAXN];
int pai[MAXN];
int peso[MAXN];

bool compare(aresta a, aresta b){return a.dist < b.dist;}

int find(int f){
    if(pai[f] == f) return f;
    return find(pai[f]);
}
void join(int a, int b){
    a = find(a);
    b = find(b);
    if(peso[a] < peso[b]) pai[a] = b;
    else if(peso[b] < peso[a]) pai[b] = a;
    else{
        pai[a] = b;
        peso[b]++;
    }
}
void init(){
    cin >> n >> m;
    for(int i  = 0;i < n;i++) pai[i] = i;
    for(int i = 0;i < m;i++) cin >> arestas[i].x >> arestas[i].y >> arestas[i].dist;
    sort(arestas, arestas+m,compare);
}

int main(){
    init();
    int size = 0;
    for(int i = 0;i < m;i++){
        if(find(arestas[i].x) != find(arestas[i].y)){
            join(arestas[i].x, arestas[i].y);
            mst[size++] = arestas[i];
        }
    }
    for(int i = 0;i < n;i++) cout<<mst[i].x<<" "<<mst[i].y<<" "<<mst[i].dist<<endl;
    return 0;
}