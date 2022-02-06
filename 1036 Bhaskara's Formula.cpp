/*https://www.beecrowd.com.br/judge/en/problems/view/1036*/
#include <bits/stdc++.h>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c;
    cin >> a >> b >> c;
    if(((b * b) - 4 * a * c) < 0 || a == 0)
        cout << "Impossivel calcular" << endl;
    else
    {
        float t, R1, R2;
        t = sqrt((b * b)- 4 * a * c);
        R1 = (-b + t) / (2 * a);
        R2 = (-b - t) / (2 * a);
        cout << fixed;
        cout << setprecision(5) << "R1 = " << R1 << endl;
        cout << setprecision(5) << "R2 = " << R2 << endl;
    }
}
