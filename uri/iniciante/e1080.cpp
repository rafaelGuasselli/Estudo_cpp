#include<iostream>
using namespace std;
int main(){
    int maior;
    int pos;
    for(int i = 0;i < 100;i++){
        int a;
        cin >> a;
        if(a > maior){
            maior = a;
            pos = i + 1;
        }
    }
    cout<<maior<<"\n"<<pos<<"\n";
}