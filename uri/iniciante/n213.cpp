#include<iostream>
using namespace std;
int main(){
    int n = 1;
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        int cont = 0;
        while(n > 0){
            int c, v;
            cin >> c >> v;
            cont += v/2;
            n--;
        }
        cout<<cont<<"\n";
    }
    return 0;
}