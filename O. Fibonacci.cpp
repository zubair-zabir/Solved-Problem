/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a[51];
    a[1] = 0;
    a[2] = 1;
    for(int i = 3; i < 51; i++)
    {
        a[i]= a[i-1] + a[i -2];
    }
    int n;
    cin >> n;
    cout << a[n] << endl;
}
