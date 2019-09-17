#include <iostream>
#include <vector>
using namespace std;

void bSort(int *vetor, int *v, int *cA,int size){
    size--;
    if(size < 1) return;
    for(int i = 0;i < size;i++){
        int aux = vetor[i];
        if(vetor[i] < vetor[i + 1]){
            vetor[i] = vetor[i + 1];
            v[i] = i + 1;
            vetor[i + 1] = aux;
            v[i = 1] = aux;
        }else if (vetor[i] == vetor[i + 1]){
            if(cA[i] < cA[i + 1]){
                vetor[i] = vetor[i + 1];
                v[i] = i + 1;
                vetor[i + 1] = aux;
                v[i = 1] = aux;
            }
        }
    }
    bSort(vetor, v, cA, size);
}

int main(){
    int n = 1;
    int cont = 0;
    while(1){
        cout<<"Instancia "<<cont<<endl;
        cin >> n;
        if(n == 0) break;
        int ordem[n];
        int pontos[n];
        int cA[n];
        int d[n];
        for(int x = 0;x < (n * (n - 1)/2);x++){
            int x,y,z,w;
            ordem[x] = x;
            cin >> x >> y >> z >> w;
            if(y > w){
                pontos[x] += 2;
                pontos[z] += 1;
            }else{
                pontos[x] += 1;
                pontos[z] += 2;
            }
            cA[x] += y;
            d[x] += w;
            cA[z] += w;
            d[z] += y;
        }
        for(int i =0;i < n;i++){
            if(d[i] == 0) d[i] = 1;
            cA[i] /= d[i];
        }
        bSort(pontos, ordem, cA,n);
    }
    return 0;
}