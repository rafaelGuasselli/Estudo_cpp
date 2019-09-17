#include<iostream>
using namespace std;
int cont;
int divi(int n, int k){
    if(n <= k){ return n;}
    return divi(n/2, k);
}

int main(){
    while(1){
        int n,k;
        cont = 1;
        cin >> n >> k;
        if(n == 0 && k == 0){
            break;
        }
        divi(n,k);
        cout<<cont<<endl;
    }
    return 0;
}   