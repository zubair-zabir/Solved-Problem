/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, c, cnt = 0, i;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int b = a[0];
    for(int i = 0; i < n; i++)
    {
        if(a[i] < b)
        {
                b = a[i];
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] == b)
            cnt++;
    }
    if(cnt % 2 == 0)
        cout << "Unlucky" << endl;
    else
        cout << "Lucky" << endl;
    return 0;
}
