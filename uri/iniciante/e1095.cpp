#include<iostream>
using namespace std;

void roda(int i, int j){
    if(j < 0) return;
    cout<<"I="<<i<<" J="<<j<<endl;
    roda(i + 3, j - 5);
}

int main(){
    roda(1, 60);    
    return 0;
}