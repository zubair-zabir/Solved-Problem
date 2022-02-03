/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/R*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    int a[1000];
    int b[1000];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for(int i = 0; i <n; i++)
    {
        for(int j = i+ 1; j < n; j++)
        {
            if(a[i] > a[j])
                swap(a[i],a[j]);
        }
        for(int j = i+1; j < n; j++)
        {
            if(b[i]>b[j])
                swap(b[i],b[j]);
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(a[i] != b[i])
            cnt = 1;
    }
    if(cnt == 1)
        cout << "no" << endl;
    else
        cout << "yes" << endl;
}
