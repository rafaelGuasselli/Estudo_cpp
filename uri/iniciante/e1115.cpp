#include<iostream>
using namespace std;

int x,y;
int main(){
    while(true){
        cin>>x>>y;
        if(x == 0 || y == 0) return 0;
        if(x > 0  && y > 0)   cout<<"primeiro"<<endl;
        if(x <= 0 && y > 0)   cout<<"segundo" <<endl;
        if(x <= 0 && y <= 0)  cout<<"terceiro"<<endl;    
        if(x > 0  && y <= 0)  cout<<"quarto"  <<endl;
    }
    return 0;
}