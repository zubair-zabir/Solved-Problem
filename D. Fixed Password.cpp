/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n = 1999;
    for(i = 1; i > 0 ; i++ )
    {
        int j;
        cin >> j;
        if(j == n)
            {
            cout << "Correct" << endl;
            break;
            }
        else
            {cout << "Wrong" << endl;}
    }
    return 0;
}
