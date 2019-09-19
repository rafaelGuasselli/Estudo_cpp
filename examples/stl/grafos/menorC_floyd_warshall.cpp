#include <bits/stdc++.h>
using namespace std;

const int MAXN = 110;
const int INF = 1e9;
int n,m;

int w[MAXN][MAXN];
int d[MAXN][MAXN];

void floyd_warshall(){
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			d[i][j] = w[i][j];

	for (int k = 0; k < n; k++) 
		for (int i = 0; i < n; i++)
			for (int j = 0; j < n; j++){
				d[i][j] = min(d[i][j], d[i][k] + d[j][k]); // recursão principal
            }
}

int main(){
    cin >> n >> m;

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(i == j) continue;
            w[i][j] = INF;
        }
    }

    for(int i = 0;i < m;i++){
        int o,d,p;
        cin >> o >> d >> p;
        w[o][d] = p;
        w[d][o] = p;
    }

    floyd_warshall();

    for(int i = 0;i < n;i++){
        for(int j = 0;j < n;j++){
            if(d[i][j] == INF) d[i][j] = 0;
            cout<<d[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}