/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[100000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int d;
    cin >> d;
    int pos = -1;
    for(int j = 0; j < n; j++)
    {
        if(d == a[j])
        {
            pos = j;
            break;
        }
    }
    cout << pos << endl;
}

 
