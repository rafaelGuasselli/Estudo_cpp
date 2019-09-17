#include <iostream>
using namespace std;
int main()
{
    while(1){
        int x,y;
        cin >> x >> y;
        if(x > y){
            cout<<"Decrescente\n";
        }else if(y > x){
            cout<<"Crescente\n";
        }else{
            break;
        }
    }
}