#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0;i < 1000;i = i){
        for(int l = 0;l < t;l++){
            if(i >= 1000){
                break;
            }
            cout<<"N["<<i<<"] = "<<l<<"\n";
            i++;
        }
    }
}