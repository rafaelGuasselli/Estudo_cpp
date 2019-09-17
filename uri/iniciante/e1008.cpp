#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int cod;
    double horas, valorHora;
    cin >> cod;
    cin >> horas;
    cin >> valorHora;
    cout<<fixed<<setprecision(2);
    cout<<"NUMBER = "<<cod<<"\n"<<"SALARY = U$ "<<(horas * valorHora)<<"\n";
    return 0;
}