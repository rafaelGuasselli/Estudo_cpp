#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> conjunto;
    conjunto.count(0);//Verifica se o elemento x esta no conjunto
    conjunto.insert(2);//Insere um valor no conunto. Os valores sempre estão ordenados!
    conjunto.insert(1);
    conjunto.insert(3);
    conjunto.erase(2);//Remove o valor x do conjunto
    conjunto.clear();//Limpa o conjunto
    conjunto.find(1);//Acha o valor x no conjunto
    conjunto.lower_bound(1);//Retorna um ponteiro para o primeiro valor que não venha antes de x
    conjunto.upper_bound(1);//Retorna um ponteiro para o primeiro valor que venhas depois de x
    return 0;
}