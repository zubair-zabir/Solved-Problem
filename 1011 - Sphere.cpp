/*https://www.beecrowd.com.br/judge/en/problems/view/1011*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pi = 3.14159, R, V;
    cin >> R;
    V = ((4.0/3) * pi * (R * R * R));
    cout << fixed << setprecision(3) << "VOLUME = " << V <<endl;
    return 0;

}
