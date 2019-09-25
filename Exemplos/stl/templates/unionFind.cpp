#include<iostream>
#define MAXN 100100
using namespace std;

int pai[MAXN];

int find(int i){
    if(pai[i] == i) return i;
    return find(pai[i]);
}

//Apadrinhar
void join(int p, int f){
    pai[f] = find(p);
}

int main(){
    //Azar tu ja entendeu!
    return 0;
}