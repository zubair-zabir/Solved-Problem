/https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, z = 0, k;
    cin >> n;
    k = n;
    while(n != 0)
    {
        int m = n % 10;
        z = z * 10;
        z = z + m;
        n = n / 10;
    }
    cout << z << endl;
    if(z == k)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}
