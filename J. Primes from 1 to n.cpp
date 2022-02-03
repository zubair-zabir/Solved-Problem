/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, cnt = 0;
    cin >> n;
    for(int y = 2; y <= n; y++)
    {
        for(i = 2, cnt = 0; i < y; i++)
        {
            if(y % i == 0)
                cnt = 1;
        }
        if(cnt == 0)
            cout << y << " ";
    }
}
