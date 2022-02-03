/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/B*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    for(int i = 0; i < a.size(); i++)
    {
        if(a[i] != '\\')
           cout << a[i];
        else
            break;
    }
    cout << endl;
}
