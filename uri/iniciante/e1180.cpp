#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
    int n;
    int menor= INT_MAX;
    int pos;
    cin >> n;
    
    for(int i = 0; i < n;i++){
        int num;
        cin >> num;
        if(num < menor){
            menor = num;
            pos = i;
        }
        n--;
    }
    cout<<"Menor valor: "<<menor<<"\n";
    cout<<"Posicao: "<<pos<<"\n";
    return 0;
}