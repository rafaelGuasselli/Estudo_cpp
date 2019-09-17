#include<iostream>
#include <iomanip>
#define PI 3.14159

using namespace std;
int main(){
    double raio;
    cin >> raio;
    double result = ((raio * raio) * PI);
    cout<< "A="<<fixed<<setprecision(4)<<result<<"\n";
    return 0;
}