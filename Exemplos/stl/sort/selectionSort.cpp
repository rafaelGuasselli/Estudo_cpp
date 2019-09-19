#include<iostream>
using namespace std;

typedef bool (*condition)(int, int); 
bool descrescente(int a, int b){return a > b;}
bool crescente   (int a, int b){return a < b;}

void sSort(int *vetor, int size, condition cond){
    int aux;
    int codAux;
    for(int y = 0;y < size;y++){
        aux = vetor[y];
        codAux = y;
        for(int i = y;i < size;i++){
            if(cond(vetor[i], aux)){
                codAux = i;
                aux = vetor[i];
            }
        }
        vetor[codAux] = vetor[y];
        vetor[y] = aux;
    }
}   

int main(){
    int vetor[10] = {10,2,6,7,4,5,9,3,1,8};
    sSort(vetor, 10, descrescente);
    for(int i = 0;i < 10;i++) cout<<vetor[i]<<" ";
    return 0;
}