/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/E*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, sum = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        int j;
        cin >> j;
        if(j > sum)
        {
            sum = j;
        }
    }
    cout << sum << endl;
}
