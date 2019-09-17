#include<iostream>
#include<string>
using namespace std;

string cast(bool a){
    if(a) return "true";
    else  return "false";
}

int main(){
    bool a,b;
    cin >> a >> b;
    
    cout<<"(!"<<cast(a)<<")        = "<<(cast(!a))<<endl;
    cout<<"("<<cast(a)<<" & "<<cast(b)<<") = "<<cast(a & b)<<endl;
    cout<<"("<<cast(a)<<" | "<<cast(b)<<") = "<<cast(a | b)<<endl;
    cout<<"("<<cast(a)<<" ^ "<<cast(b)<<") = "<<cast(a ^ b)<<endl;
    return 0;
}

/*
(!a)     negação de a. (!a) = (~a)
(a ^ b)  ou exclusivo
(a && b) e
(a || b) ou inclusivo
*/