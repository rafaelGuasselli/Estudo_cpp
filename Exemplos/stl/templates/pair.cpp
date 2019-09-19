#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<pair<int, int>> par = {{1,2}, {1,3}, {2,1}, {1,4}, {4,5}, {3,1}};
    sort(par.begin(), par.end());//Os pares são ordenados considerando primeiro o primeiro valor e depois o segundo
    //Comparações > e <, Levam em consideração primeiro o primeiro valor e caso o primeiro seja igual, vai pro segundo
    par.push_back(make_pair(1,2));//Cria um par de valor x,y
    for(int i = 0;i < par.size();i++) cout<<"("<<par[i].first<<", "<<par[i].second<<") ";
    cout<<endl;
    return 0;
}