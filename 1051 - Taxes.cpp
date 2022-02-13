/*https://www.beecrowd.com.br/judge/en/problems/view/1051*/
#include<bits/stdc++.h>
using namespace std;
int main ()
{
    double x;
    cin >> x;
    if ((x > 0) && (x <= 2000))
    {
        cout << fixed << setprecision(2) << "Isento" << endl;
    }
    else if(x > 2000)
    {
        double y, p;
        y = x - 2000;
        if((y > 0) && (y <= 1000))
        {
            p = y * .08;
            cout << fixed << setprecision(2) << "R$ " << p << endl;
        }
        else if((y > 1000) && (y <= 2500))
        {
            double n, m, r;
            n = y -1000;
            m = n * .18;
            r = 80 + m;
            cout << fixed << setprecision(2) << "R$ " << r << endl;

        }
        else if(y > 2500)
                  {
            double n, m, r;
            n = y - 2500;
            m = n * .28;
            r = 350 + m;
            cout << fixed << setprecision(2) << "R$ " << r << endl;
        }
    }
    return 0;
}
