#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    double val;
    cin >> val;
    val *= 2;
    cout<<fixed<<setprecision(4);
    for(int i = 0;i < 100;i++){
        val /= 2;
        cout << "N["<<i<<"] = " << val<<"\n";
    }
    return 0;
}