/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++)
    {
        string s;
        int cnt = 0;
        cin >> s;
        if(s.size() <= 10)
            cout << s << endl;
        else if(s.size() > 10)
        {
            for(int j = 1; j < s.size()- 1; j++)
            {
                cnt++;
            }
            cout << s[0] << cnt << s[s.size()-1] << endl;
        }
    }
}


 
