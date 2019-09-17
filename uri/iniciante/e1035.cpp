#include<iostream>
using namespace std;
int main(){
    int a,b,c,d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    if(b > c && d > a && (c + d) > (a + b)){
        cout<<"Valores aceitos\n";
    }else{
        cout<<"Valores nao aceitos\n";
    }
    return 0;
}