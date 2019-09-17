#include<iostream>
#include<iomanip>
#define PI 3.14159
using namespace std;
int main(){
    double raio;
    cin >> raio;
    cout<<fixed<<setprecision(3);
    cout<<"VOLUME = "<<(4.0/3) * PI * (raio * raio * raio)<<"\n";
    return 0;
}