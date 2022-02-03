/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int case_no;
    cin >> case_no;
    while(case_no--)
    {

        int n;
        cin >> n;
        int a[100];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for(int i = 0; i < n; i++)
        {
            for(int j = i; j < n; j++)
            {
                int mn = -1000000;
                for(int p = i; p <= j; p++)
                {
                    if (mn < a[p])
                    {
                        mn = a[p];
                    }
                }
                cout << mn << " ";
            }
        }
        cout << endl;
    }
}
