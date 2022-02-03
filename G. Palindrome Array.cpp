/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, m = 1;
    cin >> n;
    int a[100000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int j = n - 1, i = 0; j >= 0; j--, i++)
    {
        if(a[i] != a[j])
        {
            m = 0;
        }
    }
    if(m == 1)
        cout << "YES" << endl;
    else if(m == 0)
        cout << "NO" << endl;
    return 0;
}
