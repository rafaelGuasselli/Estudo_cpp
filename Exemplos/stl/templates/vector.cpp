#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vetor2;//Vector<tipo> nome;
    vector<int> vetor(3,5);//Parametros (x,y) tem o mesmo funcionamento do assign
    //caso não tenha o valor x sera adicionado 0 y vezes

    vetor2.clear();//"Reseta o vetor", muda o tamanho do vetor pra 0, mas os valores continuam la
    //so sera alterado na proxima inserção de dado que sobrescrevera o dado anteriormente escrito
    vetor.swap(vetor2);//Troca os valores do vetor1 pelo do vetor dois e vice versa
    vetor.push_back(10);//Adiciona um valor ao fim do vetor
    vetor.assign(7,100);//Adiciona x valores y ao vetor, sobrescreve apartir de 0 a x - 1
    vetor.pop_back();//Apaga o ultimo elemento do vetor
    vetor.erase(vetor.begin() + 1,vetor.begin() + 2);//Apaga o valor entre a  pos x e y
    vetor.emplace(vetor.begin() + 1,10);//Coloca um valor na pos x
    //caso tenha espaço empurra o antigo valor para o lado, se não sobrescreve
    vetor.emplace_back(10);//Adiciona um valor na ultima pos, mesmas propriedades do emplace
    vetor.empty();//teste se o vetor ta vazio
    vetor.resize(20, 100);//Redimenciona o vetor para x pos, caso x seja maior que o size as novas pos
    vetor.shrink_to_fit();//Deixa o vetor apenas com o tamanho necessario para alocar os valores atuais
    //terão valor y. Caso y não seja digitado as novas pos serão 0
    int *ponteiro = vetor.data();//Aponta para o vetor, caso o vetor seja redimensionado da ruim
    
    cout<<vetor[3]<<endl;//Vetor[x], acessa o valor na posição x
    cout<<vetor.at(3)<<endl;//Mesmo que o de cima
    cout<<vetor.front()<<endl;//Pega o primeiro valor da sequencia
    cout<<vetor.back()<<endl;//Pega o ultimo valor da sequencia
    cout<<vetor.size()<<endl;//Pega o tamanho do vetor
    cout<<vetor.max_size()<<endl;//Pega o tamanho max do vetor
    cout<<vetor.capacity()<<endl;//Pega a capacidade do vetor
    cout<<ponteiro[3]<<endl;
    cout<<vetor2[0];
    return 0;
}