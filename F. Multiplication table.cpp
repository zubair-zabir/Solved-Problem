/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    for(i = 1; i <= 12; i++)
    {
        int m;
        m = n * i;
        cout << n << " * " << i << " = " << m << endl;
    }
}
