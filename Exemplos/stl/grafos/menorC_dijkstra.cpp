#include<iostream>
#include<vector>
#include<queue>
using namespace std;
typedef pair<int, int> pii;

const int MAXN = 1e5+10;
const int INF = 1e9+10;

int m,n;
int dist[MAXN];
int mark[MAXN];

//first-vertice, second-peso da aresta
vector<pii> grafo[MAXN];

void dijkstra(int S){
    for (int i = 0; i < n; i++) dist[i] = INF;
	dist[S] = 0;

    priority_queue<pii, vector<pii>, greater<pii>> fila;
    fila.push(make_pair(0, S));

    while(!fila.empty()){
        //u é o vertice atual
        int u = fila.top().second;
        if(mark[u]) continue;
        mark[u] = true;
        //Roda por todos os vizinhos de u
        for(auto vizinhosU: grafo[u]){
            int vizinho = vizinhosU.first, aresta = vizinhosU.second;
            if(dist[vizinho] > dist[u] + aresta){
                dist[vizinho] = dist[u] + aresta;
                fila.push(make_pair(dist[vizinho], vizinho));
            }
        }
    }
}
/*
    Acha apenas a menor distancia para a origem
*/

