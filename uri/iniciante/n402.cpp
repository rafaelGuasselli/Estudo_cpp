#include<iostream>
using namespace std;

int f91(int n){ 
    if(n > 100){
        return n - 10;
    }else{
        return f91(f91(n + 11));
    }
}
int main(){
    int n;
    while(1){
        cin >> n;
        if(n == 0) break;
        cout<<"f91("<<n<<") = "<<f91(n)<<endl;
    }
}