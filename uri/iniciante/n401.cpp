#include<iostream>
using namespace std;

int qtd(int n){
    int cont = 0;
    while(n != 1){
        if(n % 2 == 1){
            n = 3 * n + 1;
        }else{
            n /= 2;
        }
        cont++;
    }
    cont++;
    return cont;
}

int main(){
    //sla
    cout<<qtd(1)<<endl;
}