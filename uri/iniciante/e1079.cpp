#include<iostream>
#include<iomanip>
#define PESOA 2
#define PESOB 3
#define PESOC 5

using namespace std;
int main(){
    int n;
    cin >> n;
    cout<<fixed<<setprecision(1);
    while(n > 0){
        float a,b,c;
        cin >>a >> b >> c;
        cout<<(a * PESOA + b * PESOB + c * PESOC)/(PESOA + PESOB + PESOC)<<"\n";
        n--;
    }
    return 0;
}