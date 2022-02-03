/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, sum = 0;
    cin >> n;
    int a[100000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = n - 1; i >= 0; i-- )
    {
        sum = sum + a[i];
    }
    if(sum < 0)
    {
        sum = -(sum);
    }
    cout << sum << endl;
}
