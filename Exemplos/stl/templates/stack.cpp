#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> pilha;
    pilha.push(10);//Empilha mais um valor
    pilha.emplace(20);//Não entendi ainda, pra mim é igual ao emplace_back
    pilha.push(10);//Empilha mais um valor
    pilha.empty();//Testa se a pilha esta vazia
    pilha.pop();//Remove o elemento do topo
    pilha.size();//Pega o tamanho da pilha
    cout<<pilha.top()<<endl;//Acessa o valor no topo da pilha

    return 0;
}