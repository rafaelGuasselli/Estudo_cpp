#include<iostream>
#include<iomanip>
#define PESOA 2
#define PESOB 3
#define PESOC 5
using namespace std;
int main(){
    double a,b,c;
    cin >> a;
    cin >> b;
    cin >> c;
    cout<<fixed<<setprecision(1);
    cout<<"MEDIA = "<<((a * PESOA + b * PESOB + c * PESOC)/(PESOA + PESOB + PESOC))<<"\n";
    return 0;
}