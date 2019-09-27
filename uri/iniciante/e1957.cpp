#include<iostream>
#include<string>
using namespace std;

int v;
const char caracteres[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
int main(){
    cin>>v;
    string out = "";
    while(v != 0){
        out += caracteres[v % 16];
        v /= 16;
    }    
    for(int i = out.size() - 1;i >= 0;i--){
        cout<<out[i]<<"";
    }
    cout<<endl;
    return 0;
}