/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, n;
    cin >> a >> b;
    n = a + b + 1;
    char s[25];
    for(int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    int cnt = 1;
    for(int i = 0; i < n; i++)
    {
        if(i != a)
        {
            if(s[i] < '0' || s[i] > '9')
                cnt = 0;
        }
        else
        {
            if(s[a] != '-')
                cnt = 0;
        }
    }
    if(cnt == 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}
