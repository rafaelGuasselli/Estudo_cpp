#include<iostream>
#include<string>
#include<ctype.h>
#include<math.h>
using namespace std;

void stepOne(string &texto){
    for(int i = 0;i < texto.size();i++){
        if(isalpha(texto[i])){
            texto[i] += 3;
        }
    }
}
void stepTwo(string &texto){
    for(int i = 0;i < texto.size()/2;i++){
        swap(texto[i], texto[texto.size() - i - 1]);
    }
}
void stepThree(string &texto){
    for(int i = trunc(texto.size()/2.0);i < texto.size();i++){
        texto[i] -= 1;
    }
}

int main(){
    string texto;
    int n;
    cin >> n;
    getline(cin, texto);
    while(n > 0){
        getline(cin, texto);
        stepOne(texto);
        stepTwo(texto);
        stepThree(texto);
        cout<<texto<<endl;
        n--;
    }
    return 0;
}