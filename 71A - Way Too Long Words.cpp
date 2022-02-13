/*https://codeforces.com/problemset/problem/71/A*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string s;
        int cnt = 0;
        cin >> s;
        if(s.size() < 10)
            cout << s << endl;
        else if(s.size() > 10)
        {
            for(int i = 1; i < s.size()-1; i++)
            {
                cnt++;
            }
            cout << s[0] << cnt << s[s.size()-1] << endl;
        }
    }
}
