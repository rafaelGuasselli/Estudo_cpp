#include<iostream>
#include<math.h>
#include<string>

using namespace std;
int main(){
    string a;
    string b;
    int n;
    cin >> n;

    while(n > 0){
        int operations = 0;
        cin >> a >> b;
        for(int i = 0;i < a.size(); i++){
            if(a[i] <= b[i]){
                operations += b[i] - a[i];
            }else{
                operations += 26 + b[i] - a[i];
            }
        }
        cout<<operations<<endl;
        n--;
    }
}