/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, a = 0, b = 1, c;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
}
