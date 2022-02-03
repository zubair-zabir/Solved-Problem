/*https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/F*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    long long int m, n, s, p, sum;
    cin >> m >> n;
    s = m % 10;
    p = n % 10;
    sum = s + p;
    cout << sum << endl;
    return 0;
}
