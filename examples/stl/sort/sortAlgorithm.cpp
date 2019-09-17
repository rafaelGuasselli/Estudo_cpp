#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
    int a[10] = {10,9,8,7,6,5,4,3,2,1};
    vector<int> av(a, a + 10);
    sort(av.begin(), av.end());
    for(int i = 0;i < av.size();i++) cout<<av[i]<<" ";
}