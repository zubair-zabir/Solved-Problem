/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/S*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int j, n;
    cin >> n;
    for(j = 1; j <= n; j++)
    {
        int i, a, b, temp;
        cin >> a >> b;
        if(a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if(a % 2 != 0)
            a++;
        int sum;
        for(i = a, sum = 0; i < b; i++)
        {
            if(i % 2 != 0)
            {
                sum = sum + i;
            }
        }
        cout << sum << endl;
    }
}
