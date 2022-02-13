/*https://www.beecrowd.com.br/judge/en/problems/view/1014*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int X;
    double Y, total;
    cin >> X >> Y;
    total = X / Y;
    cout << fixed << setprecision(3) << total << " km/l" << endl;
    return 0;
}
