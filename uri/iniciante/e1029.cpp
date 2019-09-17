#include<iostream>
using namespace std;
int calls;
int fib(int n){
    calls++;
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin >> n;

    while(n > 0){
        int f;
        calls = -1;
        cin >> f;
        cout<<"fib("<<f<<") = "<<calls<<" calls = "<<fib(f)<<endl;
        n--;
    }
}