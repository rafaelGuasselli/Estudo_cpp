#include<iostream>
using namespace std;
#define MAXN 100000

int n,m,a,b;
pair<int,int> balde[MAXN];

int main(){
    cin>>n>>m;
    int aux;
    for(int i = 1;i <= n;i++) {cin>>aux; balde[i].first = aux; balde[i].second = aux;}
    while(m > 0){
        int o;cin>>o;
        if(o==1){
            int p,i; cin>>p>>i;
            if(p < balde[i].first){
                balde[i].first = p;
            }
            if(p > balde[i].second){
                balde[i].second = p;
            }
        }
        if(o==2){
            cin>>a>>b;
            int maior = 0;
            for(int i = a;i <= b;i++){
                for(int j = a;j <= b;j++){
                    if(i == j) continue;
                    int aux = abs(balde[i].first - balde[j].second);
                    if(aux > maior) maior = aux;
                }
            }
            cout<<maior<<endl;
        }
        m--;
    }
    
    return 0;
}