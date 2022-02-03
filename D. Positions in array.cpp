/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] <= 10)
        cout << "A[" << i << "] = " << a[i] << endl;
    }
}
