#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> tarefas;
    for(int i = 0;i < 10;i++) tarefas.push(i);
    tarefas.emplace(10);//Igual ao push. Eu acho
    tarefas.pop();//Remove a tarefa atualmente realizada
    cout<<tarefas.back()<<endl;//Retorna a ultima tarefa a ser feita
    cout<<tarefas.front()<<endl;//Retorna a tarefa atualmente realizada
    cout<<tarefas.size()<<endl;//Retorna o tamanho da queue
    cout<<tarefas.empty()<<endl;//Verifica se a queue esta vazias
    return 0;
}