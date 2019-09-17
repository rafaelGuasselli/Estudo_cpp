#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    cout<<"(+"<<a<<")     = "<<(+a)<<endl;
    cout<<"(-"<<a<<")     = "<<(-a)<<endl;
    cout<<"("<<a<<" + "<<b<<")  = "<<(a + b)<<endl;
    cout<<"("<<a<<" - "<<b<<")  = "<<(a - b)<<endl;
    cout<<"("<<a<<" * "<<b<<")  = "<<(a * b)<<endl;
    cout<<"("<<a<<" / "<<b<<")  = "<<(a / b)<<endl;
    cout<<"("<<a<<" % "<<b<<")  = "<<(a % b)<<endl;
    cout<<"(~"<<a<<")     = "<<(~a)<<endl;
    cout<<"("<<a<<" & "<<b<<")  = "<<(a & b)<<endl;
    cout<<"("<<a<<" | "<<b<<")  = "<<(a | b)<<endl;
    cout<<"("<<a<<" ^ "<<b<<")  = "<<(a ^ b)<<endl;
    cout<<"("<<a<<" << "<<b<<") = "<<(a << b)<<endl;
    cout<<"("<<a<<" >> "<<b<<") = "<<(a >> b)<<endl;
    
    return 0;
}

/*
Calculos com base decimal
(+a)    a vezes 1
(-a)    a vezes -1 
(a + b) a mais b
(a - b) a menos b
(a * b) a vezes b
(a / b) a dividido por b
(a % b) resto de a por b

Bitwise
(~a)     Negação de cada bit, ou seja 0 vira 1 e 1 vira 0
(a & b)  se o valor da mesma casa binaria de a e b for 1 a casa vale 1, se não vale 0
(a | b)  se o valor da mesma casa binaria de a e/ou(ou inclusivo) b for 1 a casa vale 1, se não vale 0
(a ^ b)  se o valor da mesma casa binaria de a ou(ou exclusivo) b for 1 a casa vale 1, se não vale 0
(a << b) Todos os bits de a são deslocados b casas para esquerda
(a >> b) Todos os bits de a são deslocados b casas para direita
*/