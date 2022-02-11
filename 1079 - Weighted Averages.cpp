/*https://www.beecrowd.com.br/judge/en/problems/view/1079*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double a, b, c, avg;
    int i = 0, n;
    cin >> n;
    while(i < n)
    {
        cin >> a >> b >> c;
        avg = ((a * 2) + (b * 3) + (c * 5)) / 10;
        cout << fixed << setprecision(1) << avg << endl;
        i++;
    }
    return 0;
}
