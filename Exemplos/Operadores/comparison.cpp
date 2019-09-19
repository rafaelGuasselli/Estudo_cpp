#include<iostream>
#include<string>
using namespace std;

string cast(bool a){
    if(a) return "true";
    else  return "false";
}

int main(){
    int a,b;
    cin >> a >> b;
    cout<<"("<<a<<" == "<<b<<") =  "<<cast(a == b)<<endl;
    cout<<"("<<a<<" != "<<b<<") =  "<<cast(a != b)<<endl;
    cout<<"("<<a<<" < "<<b<<")  =   "<<cast(a < b)<<endl;
    cout<<"("<<a<<" > "<<b<<")  =   "<<cast(a > b)<<endl;
    cout<<"("<<a<<" <= "<<b<<") =  "<<cast(a <= b)<<endl;
    cout<<"("<<a<<" >= "<<b<<") =  "<<cast(a >= b)<<endl;
    //cout<<"("<<a<<" <=> "<<b<<") = "<<cast(a <=> b)<<endl;
    return 0;
}

/*
(a < b)   se a for menor que b
(a > b)   se a for maior que b
(a == b)  se a for igual a b
(a != b)  se a for diferente de b
(a <= b)  se a for menor ou igual a b
(a >= b)  se a for maior ou igual a b
(a <=> b) sla
*/