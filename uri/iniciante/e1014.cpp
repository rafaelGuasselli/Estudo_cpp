#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int d;
    double c;
    cin >> d;
    cin >> c;
    cout<<fixed<<setprecision(3);
    cout<<(d/c)<<" km/l\n";
    return 0;
}