    #include <iostream>
    using namespace std;

    int soma(int a, int b)
    {
        int a1 = 0;
        int an = 0;
        if (a < b) {
            a1 = a + (1 + a % 2);
            an = b - (1 + b % 2);
        }
        else if (a == b){
            return 0;
        }
        else{
            a1 = b + (1 + b % 2);
            an = a - (1 + a % 2);
        }
        int n = (2 - a1 + an)/2;
        return ((a1 + an) * n)/2;
    }
    int main()
    {
        int n;
        cin >> n;
        while (n > 0)
        {
            int a, b;
            cin >> a >> b;
            cout<<soma(a,b)<<"\n";
            n--;
        }
    }