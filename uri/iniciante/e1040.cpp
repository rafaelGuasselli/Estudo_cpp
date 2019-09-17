#include <iostream>
#include <iomanip>
#define PESOA 2
#define PESOB 3
#define PESOC 4
#define PESOD 1

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double media = (PESOA * a + PESOB * b + PESOC * c + PESOD * d) / (PESOA + PESOB + PESOC + PESOD);
    cout << fixed << setprecision(1);
    cout << "Media: " << media << "\n";
    if (media < 5)
    {
        cout << "Aluno reprovado.\n";
    }
    else if (media < 7)
    {
        cout << "Aluno em exame.\n";
        double e;
        cin >> e;
        cout << "Nota do exame: " << e << "\n";
        media = (media + e) / 2;
        if (media < 5)
        {
            cout << "Aluno reprovado.\n";
        }
        else
        {
            cout << "Aluno aprovado.\n";
        }
        cout<<"Media final: "<<media<<"\n";
    }else{
        cout<<"Aluno aprovado.\n";
    }
    return 0;
}