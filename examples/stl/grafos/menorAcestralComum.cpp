#include<iostream>
#include<vector>
#define MAXN 1001
using namespace std;
typedef vector<int>::iterator it;
vector<int> pai[MAXN];

it find(it b, it e, int v){
    for(;e != b;e--){
        if(*e == v){
            return e;
        }
    }
    return b;
}

void apadrinhar(int p, int f){
    for(int i = 0;i < pai[p].size();i++){
        pai[f].push_back(pai[p][i]);
    }
    pai[f].push_back(p);
}

int main(){
    int n; cin >> n;
    for(int pai = 1;pai <= n;pai++){
        int t; cin >> t;
        for(int i = 1;i <= t;i++){
            int filho; cin >> filho;
            apadrinhar(pai, filho);
        }
    }
    int q; cin >> q;
    for(int i = 1;i <= q;i++){
        int a,b; cin >> a >> b;
        it mac;
        for(int j = pai[a].size() - 1;j >= 0;j++){
            if((mac = find(pai[b].begin(), pai[b].end(), pai[a][j])) != pai[b].end()) break;
        }
        cout<<*mac<<endl;
    }
    return 0;
}