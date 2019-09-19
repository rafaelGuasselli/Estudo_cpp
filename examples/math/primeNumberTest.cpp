#include<iostream>
#include<string>
#include<math.h>
using namespace std;


string cast(bool i){
    if(i) return "true";
    return "false";
}
bool teste(int n){
    n = abs(n);
    if(n == 1) return false;
    for(int i = 2;i * i <= n;i++){
        if(n % i == 0) return false;
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    cout<<cast(teste(n))<<endl;
    return 0;
}