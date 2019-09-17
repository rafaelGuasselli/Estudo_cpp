#include<iostream>
#include<map>
#include<string>
using namespace std;


int main(){
    map<string, int> mapa;
    mapa.insert(make_pair("101", 5));
    mapa.count("101");//Verifica se a chave x esta no vetor
    //De resto é o mesmo e to com preguiça de continua
    return 0;
}