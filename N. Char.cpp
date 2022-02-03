/*https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/N*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    if(ch >= 65 && ch <= 90)
    {
        ch = ch + 32;
        cout << ch << endl;
    }
    else if(ch >= 97 && ch <= 122)
    {
        ch = ch - 32;
        cout << ch << endl;
    }
    return 0;
}
