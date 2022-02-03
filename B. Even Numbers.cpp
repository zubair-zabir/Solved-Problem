/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        cout << i << endl;
    }
    if(n == 1)
    cout << "-1" << endl;
}
