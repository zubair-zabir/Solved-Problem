/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] > 0)
        {
            a[i] = 1;
        }
        else if(a[i] < 0)
        {
            a[i] = 2;
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}

 
