#include<iostream>
#include<math.h>
using namespace std;

int bot(int e, int f){
    if(e == 2) e++;
    if(e < 3) return f;
    f += floor(e/3.0);
    e = floor(e/3.0) + e % 3;
    return bot(e,f); 
}

int main(){
    int n;
    for(int i = 0;i < 10;i++){
        cin >> n;
        if(n == 0){
            break;
        }
        cout<<bot(n, 0)<<endl;
    }
    return 0;
}