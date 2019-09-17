#include<iostream>
#define SENHA 2002
using namespace std;
int main(){
    while(1){
        int senha;
        cin >> senha;
        if(senha == SENHA){
            break;
        }else{
            cout<<"Senha Invalida\n";
        }
    }
    cout<<"Acesso Permitido\n";
    return 0;
}