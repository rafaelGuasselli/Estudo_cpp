#include<iostream>
#include<set>
using namespace std;
#define MAXN 100000

int n,m,a,b;
set<int> balde[MAXN];

int maiorP(int i){
    return *balde[i].begin();
}

int menorP(int i){
    return *balde[i].rbegin();
}

int main(){
    cin>>n>>m;
    int aux;
    for(int i = 1;i <= n;i++) {cin>>aux; balde[i].insert(aux);}
    while(m > 0){
        int o;cin>>o;
        if(o==1){
            int p,i; cin>>p>>i;
            balde[i].insert(p);
        }
        if(o==2){
            cin>>a>>b;
            int maior = 0;
            for(int i = a;i <= b;i++){
                for(int j = i;j <= b;j++){
                    if(i == j) continue;
                    int aux = max(abs(maiorP(i) - menorP(j)), abs(menorP(i) - maiorP(j)));
                    if(aux > maior) maior = aux;
                }
            }
            cout<<maior<<endl;
        }
        m--;
    }
    
    return 0;
}