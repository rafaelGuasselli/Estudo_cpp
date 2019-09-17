#include<iostream>
using namespace std;

int n,m;//vertices, arestas


int fillG(bool *g){
    for(int y = 0;y < n;y++)
        for(int x = 0;x < m;x++)
            g[y * m + x] = false;
    g[0 * m + 0] = true;
}
int fillG(int *g){
    for(int y = 0;y < n;y++)
        for(int x = 0;x < m;x++)
            g[y * m + x] = 0;
}

void floyd_warshall(int *g, bool *v){
	for (int k = 0; k < n; k++) 
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++){
				g[i * n + j] = min(g[i * n + j], g[i * n + k] + g[j * n + k]); 
            }
}

int main(){
    cin >> n >> m;
    int grafos[n][m];    
    bool visitados[n][m];
    fillG((int *)grafos);
    fillG((bool *)visitados);

    for(int i = 0;i < m;i++){
        int va,vb, d;
        cin >> va >> vb >> d;
        grafos[va][vb] = d;
        grafos[vb][va] = d;   
    }
    floyd_warshall((int *) grafos, (bool *) visitados);
    cout<<endl;
    for(int y = 0;y < n;y++){
        for(int x = 0;x < n;x++)
            cout<<grafos[y][x]<<" ";
        cout<<endl;
    }
    return 0;
}