#include<iostream>
using namespace std;
#define MAXN 500


int buscaB(int* vet, int val){
    int ini = 0,fim = MAXN,meio;
    while(ini < fim){
        meio = (ini+fim)/2;
        if(vet[meio] == val) return meio;
        if(vet[meio] < val) ini = meio;
        if(vet[meio] > val) fim = meio;
    }
    return -1;
}


int main(){
    int vetor[MAXN];
    for(int i = 0;i < MAXN;i++) vetor[i] = i + 20;
    cout<<buscaB(vetor, 21)<<endl;
    return 0;
}