/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i, cnt = 0;
    cin >> n;
    for(i = 2; i < n; i++)
    {
        if(n % i == 0)
        {
            cnt = 1;
            break;
        }
    }
    if(cnt == 0 && n != 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
