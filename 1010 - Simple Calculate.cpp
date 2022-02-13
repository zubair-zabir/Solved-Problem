/*https://www.beecrowd.com.br/judge/en/problems/view/1010*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int code1, present1; double value1;
    int code2, present2; double value2;
    cin >> code1 >> present1 >> value1 >> code2 >> present2 >> value2;
    double total;
    total = ((present1 * value1) + (present2 * value2));
    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << total << endl;
    return 0;
}
