#include<iostream>
#include<iomanip>
#define PESOA 3.5
#define PESOB 7.5
using namespace std;
int main(){
    double a,b;
    cin >> a;
    cin >> b;
    cout<<setprecision(5)<<fixed<<"MEDIA = "<<(a * PESOA + b * PESOB)/(PESOA + PESOB)<<"\n";
    return 0;
}
