/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int sum = 0;
    getline(cin, s);
    for(int i = 0; i < s.size(); i++)
    {
        sum = sum + s[i] - '0';
    }
    cout << sum << endl;
    return 0;
}
