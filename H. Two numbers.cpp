/*https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/H*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main ()
{
    int A, B, X, Y, Z;
    cin >> A >> B;
    X = floor(A/B);
    Y = ceil((double)A/B);
    Z = round((double)A/B);
    cout << "floor " << A << " / " << B << " = " << X << endl;
    cout << "ceil " << A << " / " << B << " = " << Y << endl;
    cout << "round " << A << " / " << B << " = " << Z << endl;
    return 0;
}
