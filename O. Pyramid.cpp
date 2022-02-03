/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/O*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        int j;
        for(j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
