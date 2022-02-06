/*https://www.beecrowd.com.br/judge/en/problems/view/1009*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string n;
    double a, b, c;
    cin >> n >> a >> b;
    c = a + (b * .15);
    cout << fixed;
    cout << setprecision(2) << "TOTAL = R$ " << c << endl;
}
