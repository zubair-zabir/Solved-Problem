/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    char c[1000000];
    for(int i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    for(int i = 0; i < n; i++)
    {
        sum = sum + c[i] - '0';

    }
    cout << sum << endl;
}
