/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/Z*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100005];
    int n, q;
 
    cin >> n >> q;
 
    for (int i = 0; i < n; i++)
        cin >> a[i];
 
    sort(a + 0, a + n);
 
    while (q--)
    {
        int x;
        cin >> x;
 
        int left = 0, right = n - 1;
 
        int flag = 0;
 
        while (left <= right)
        {
            int middle = (left + right) / 2;
 
            if (a[middle] == x)
            {
                flag = 1;
                break;
            }
 
            else if (a[middle] < x)
                left = middle + 1;
 
            else if (a[middle] > x)
                right = middle - 1;
        }
 
        if (flag == 1)
            cout << "found" << endl;
        else
            cout << "not found" << endl;
    }
 
    return 0;
}
