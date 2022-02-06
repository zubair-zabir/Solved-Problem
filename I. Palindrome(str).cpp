/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int cnt = 0;
    for(int i = 0; i < s.size(); i++)
    {
        if(s[(s.size()-1) - i] != s[i])
        {
            cnt = 1;
        }
    }
    if(cnt == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
