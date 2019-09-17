#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int> filaPrioridade;
    //Igual a queue só que os maiores valores ficam em cima 
    priority_queue<int, vector<int>,greater<int>> filaPrioridade;
    //Igual a queue só que os menores valores ficam em cima 
    return 0;
}