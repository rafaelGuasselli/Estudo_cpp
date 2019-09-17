#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int y = 0;
    while(x < 10){
        cout<<"X: "<<++x<<" "; 
    }
    cout<<endl;
    while(y < 10){
        cout<<"Y: "<<y++<<" "; 
    }
    cout<<endl;
    while(x > 0){
        cout<<"X: "<<--x<<" "; 
    }
    cout<<endl;
    while(y > 0){
        cout<<"Y: "<<y--<<" "; 
    }
}

/*
x++ soma depois da linha ser executada
++x soma antes da linha ser executada
x-- subtrai depois da linha ser executada
--x subtrai antes da linha ser executada
*/