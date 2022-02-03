/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    cin >> n;
    for(i = 1; i <= n; i++)
    {
        int j;
        for(j = n - i; j > 0; j--)
        {
            cout << " ";
        }
        int k;
        for(k = 1; k <= n -(n- i); k++)
        {
            cout << "*";
        }
        int l;
        for(l = 2; l <= n -(n- i); l++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
