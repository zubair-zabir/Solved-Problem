/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/U*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, ans = 0;
    cin >> n >> a >> b;
    for(int i = 1; i <= n; i++)
    {
        int j = i;
        int digitsum = 0;
        while(j > 0)
        {
            int m = j % 10;
            digitsum = digitsum + m;
            j = j / 10;
        }
        if(digitsum >= a && digitsum <= b)
            ans = ans + i;
    }
    cout << ans << endl;
}
