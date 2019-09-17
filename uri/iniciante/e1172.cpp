#include<iostream>
using namespace std;
int main(){
    int num[10];
    for(int i = 0;i < 10;i++){
        cin >> num[i];
        if(num[i] <= 0){
            num[i] = 1;
        }
        cout<<"X["<<i<<"] = "<<num[i]<<"\n";
    }
    
}