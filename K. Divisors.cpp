/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/K*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cnt = 0;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            cnt = 1;
            cout << i << endl;
        }
    }
}
