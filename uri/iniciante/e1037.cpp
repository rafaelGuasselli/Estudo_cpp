#include<iostream>
using namespace std;

int main(){
    float valor;
    cin >> valor;

    if(valor < 0){
        cout<<"Fora de intervalo\n";
    }else if(valor <= 25){
        cout<<"Intervalo [0,25]\n";
    }else if(valor <=50){
        cout<<"Intervalo (25,50]\n";
    }else if(valor <= 75){
        cout<<"Intervalo (50,75]\n";
    }else if(valor <= 100){
        cout<<"Intervalo (75,100]\n";
    }else{
        cout<<"Fora de intervalo\n";
    }
    return 0;
}