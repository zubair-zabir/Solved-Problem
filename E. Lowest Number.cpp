/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, c = 1;
    cin >> n;
    int a[1000];
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int b = a[1];
    for(int i = 1; i <= n; i++)
    {
        if(a[i] < b)
        {
            c = i;
            b = a[i];
        }

    }
    cout << b << " " << c;
}
