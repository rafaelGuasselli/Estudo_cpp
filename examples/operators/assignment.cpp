#include <iostream>
using namespace std;

int main(){
    int a,b,ar;
    cin >> a >> b;
    ar = a;
    a = b;
    cout<<"("<<ar<<" = "<<b<<")   a: "<<a<<endl;
    a = ar;
    a += b;
    cout<<"("<<ar<<" += "<<b<<")  a: "<<a<<endl;
    a = ar;
    a -= b;
    cout<<"("<<ar<<" -= "<<b<<")  a: "<<a<<endl;
    a = ar;
    a *= b;
    cout<<"("<<ar<<" *= "<<b<<")  a: "<<a<<endl;
    a = ar;
    a /= b;
    cout<<"("<<ar<<" /= "<<b<<")  a: "<<a<<endl;
    a = ar;
    a %= b;
    cout<<"("<<ar<<" %= "<<b<<")  a: "<<a<<endl;
    a = ar;
    a &= b;
    cout<<"("<<ar<<" &= "<<b<<")  a: "<<a<<endl;
    a = ar;
    a |= b;
    cout<<"("<<ar<<" |= "<<b<<")  a: "<<a<<endl;
    a = ar;
    a ^= b;
    cout<<"("<<ar<<" ^= "<<b<<")  a: "<<a<<endl;
    a = ar;
    a <<= b;
    cout<<"("<<ar<<" <<= "<<b<<") a: "<<a<<endl;
    a = ar;
    a >>= b;
    cout<<"("<<ar<<" >>= "<<b<<") a: "<<a<<endl;
    return 0;
}

/*
Calculos com base decimal
(a = b)   a recebe o valor de b
(a += b)  adiciona o valor de b ao a
(a -= b)  a recebe a diferença de b por a
(a *= b)  a recebe o produto de a por b
(a /= b)  a recebe o quociente de a por b
(a %= b)  a recebe o resto de a por b

Bitwise
(a &= b)  se o valor da mesma casa binaria de a e b for 1 a casa vale 1, se não vale 0
(a |= b)  se o valor da mesma casa binaria de a e/ou(ou inclusivo) b for 1 a casa vale 1, se não vale 0
(a ^= b)  se o valor da mesma casa binaria de a ou(ou exclusivo) b for 1 a casa vale 1, se não vale 0
(a <<= b) Todos os bits de a são deslocados b casas para esquerda
(a >>= b) Todos os bits de a são deslocados b casas para direita
*/