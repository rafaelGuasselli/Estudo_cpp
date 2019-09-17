#include<iostream>
using namespace std;
int main(){
    int vec[20];    
    for(int i = 19;i >= 0;i--){
        cin >> vec[i];
    }
    for(int i = 0;i < 20;i++){
        cout<<"N["<<i<<"] = "<<vec[i]<<"\n";
    }
    return 0;
}