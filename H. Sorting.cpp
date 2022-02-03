/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/submission/143934076*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n;j++)
        {
            if(a[i] > a[j])
            {
                swap(a[i],a[j]);
            }
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
