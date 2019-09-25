#include<iostream>
using namespace std;
#define MAXN 100001

int n,m;
int o;
int k,p;

int andar[MAXN];

int somaAndares(int f){
    if(f == 1) return andar[1];
    return andar[f] + somaAndares(f-1);
}

int main(){
    cin>>n>>m;
    for(int i = 1;i <= n;i++) cin>>andar[i];
    
    while(m > 0){
        cin>>o;
        if(o == 0){
            cin>>k>>p;
            andar[k] = p;
        }
        if(o == 1){
            cin>>k;
            cout<<somaAndares(k)<<endl;
        }
        m--;
    }
    return 0;
}