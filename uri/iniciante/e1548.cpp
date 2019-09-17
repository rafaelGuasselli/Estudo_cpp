#include <iostream>
#include <algorithm>
using namespace std;

void bSort(int *vetor, int size){
    size--;
    if(size < 1) return;
    for(int i = 0;i < size;i++){
        int aux = vetor[i];
        if(vetor[i] < vetor[i + 1]){
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = aux;
        }
    }
    bSort(vetor, size);
}

int main(){
    int n;
    cin >> n;
    while(n > 0){
        int m;
        cin >> m;
        int notas[m];
        int clone[m];
        for(int i = 0;i < m;i++) cin >> notas[i];
        copy(notas, notas + m, clone);
        bSort(clone, m);
        int cont = 0;
        for(int i = 0;i < m;i++) if(clone[i] == notas[i]) cont++;
        cout<<cont<<endl;
        n--;
    }
    return 0;
}