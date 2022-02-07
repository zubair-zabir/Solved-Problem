/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int k = 0; k < n; k++)
    {
        string s, t;
        cin >> s >> t;
        if(s.size() <= t.size())
        {
            for(int i = 0; i < s.size(); i++)
            {
                cout << s[i] << t[i];
            }
            for(int j = s.size(); j < t.size(); j++)
            {
                cout << t[j];
            }
            cout << endl;
        }
        else if(s.size() > t.size())
        {
            for(int i = 0; i < t.size(); i++)
            {
                cout << s[i] << t[i];
            }
            for(int j = t.size(); j < s.size(); j++)
            {
                cout << s[j];
            }
            cout << endl;
        }
    }
}
