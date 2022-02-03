/*https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/O*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, w;
    char op;
    cin >> a >> op >> b;

    if(op == '+')
    {
        w = a + b;
        cout << w << endl;
    }
    else if(op == '-')
    {
        w = a - b;
        cout << w << endl;
    }
    else if(op == '*')
    {
        w = a * b;
        cout << w << endl;
    }
    else if(op == '/')
    {
        w = a / b;
        cout << w << endl;
    }
    return 0;
}
