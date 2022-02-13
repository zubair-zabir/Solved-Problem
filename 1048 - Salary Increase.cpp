/*https://www.beecrowd.com.br/judge/en/problems/view/1048*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double x, p;
    cin >> x;
    if ((x > 0) && (x <= 400))
    {
        p = x * .15;
        x = x + p;
        cout << fixed << setprecision(2) << "Novo salario: " << x << endl <<"Reajuste ganho: " << p << endl << "Em percentual: 15 %" <<endl;
    }
    else if ((x > 400) &&(x <= 800))
    {
        p = x * .12;
        x = x + p;
        cout << fixed << setprecision(2) << "Novo salario: " << x << endl <<"Reajuste ganho: " << p << endl << "Em percentual: 12 %" <<endl;
    }
    else if ((x > 800) && (x <= 1200))
    {
        p = x * .10;
        x = x + p;
        cout << fixed << setprecision(2) << "Novo salario: " << x << endl <<"Reajuste ganho: " << p << endl << "Em percentual: 10 %" <<endl;
    }
    else if ((x > 1200) && (x <= 2000))
      {
        p = x * .07;
        x = x + p;
        cout << fixed << setprecision(2) << "Novo salario: " << x << endl <<"Reajuste ganho: " << p << endl << "Em percentual: 7 %" <<endl;
    }
    else if(x > 2000)
    {
        p = x * .04;
        x = x + p;
        cout << fixed << setprecision(2) << "Novo salario: " << x << endl <<"Reajuste ganho: " << p << endl << "Em percentual: 4 %" <<endl;
    }
    return 0;
}
