/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/P*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, j, k;
    cin >> n;
    for(i = n; i > 0; i--)
    {
        for(k = i; k > 0; k--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
