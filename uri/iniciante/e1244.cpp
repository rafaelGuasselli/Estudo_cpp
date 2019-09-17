#include<iostream>
#include<string>
using namespace std;

void bSort(string *vetor, int size){
    size--;
    if(size < 1) return;
    for(int i = 0;i < size;i++){
        string aux = vetor[i];
        if(vetor[i].size() < vetor[i + 1].size()){
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = aux;
        }
    }
    bSort(vetor, size);
}


int main(){
    int n;
    cin >> n;
    cin.getline(0,0);
    string saida = "";
    while(n > 0){ 
        string input;
        string palavras[50];
        getline(cin, input);
        input += " ";
        int ref = 0;
        int index = 0;
        for(int i = 0;i < input.size();i++) {
            if(input[i] == ' '){
                palavras[index++] = input.substr(ref, i - ref);
                ref = i + 1;
            }
        }
        bSort(palavras, index);
        for(int i = 0;i < index;i++) saida += palavras[i] + " ";
        saida += "\n";
        n--;
    }
    cout<<saida;
    return 0;
}