#include<iostream>
#include<string>
using namespace std;

int n;
string meses[] = {"January", "February", "March", "April", "May", "June", "July",
                  "August", "September", "October", "November", "December"};
int main(){
    cin>>n;
    cout<<meses[n - 1]<<endl;
    return 0;
}