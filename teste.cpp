#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> a;
    
    a.insert(3);
    a.insert(2);
    a.insert(1);
    cout<<*a.begin();
    cout<<*a.end();
    
    return 0;
}