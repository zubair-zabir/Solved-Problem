/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a = 0, b = 0, c = 0, d = 0;
    cin >> n;
    int i;
    for(i = 1; i <= n; i++)
    {
        long long int j;
        cin >> j;
        if(j % 2 == 0)
            a++;
        if(j % 2 != 0)
            b++;
        if(j > 0)
            c++;
        if(j < 0)
            d++;
        }
        cout << "Even: " << a << endl;
        cout << "Odd: " << b << endl;
        cout << "Positive: " << c << endl;
        cout << "Negative: " << d << endl;
        return 0;
}
