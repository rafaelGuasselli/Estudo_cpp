#include<iostream>
using namespace std;

typedef bool (*condition)(int, int); 
bool descrescente(int a, int b){return a < b;}
bool crescente   (int a, int b){return a > b;}

void bSort(int *vetor, int size, condition cond){
    size--;
    if(size < 1) return;
    for(int i = 0;i < size;i++){
        int aux = vetor[i];
        if(cond(vetor[i], vetor[i + 1])){
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = aux;
        }
    }
    bSort(vetor, size, cond);
}


int main(){
    int vetor[10] = {2,1,4,5,8,3,7,6,9,10};
    bSort(vetor, 10, crescente);
    for(int i = 0;i < 10;i++) cout<<vetor[i]<<" ";
    return 0;
}