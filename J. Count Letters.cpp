/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for(char i = 'a'; i <= 'z'; i++)
    {
        int cnt = 0;
        for(int j = 0; j < s.size(); j++)
        {
            if(i == s[j])
                cnt++;
        }
        if(cnt != 0)
        cout << i << " : " << cnt << endl;
    }
}
