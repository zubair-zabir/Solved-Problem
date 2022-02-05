/*https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    cout << a.size() << " " << b.size() << endl;
    cout << a << b << endl;
    swap(a[0],b[0]);
    cout << a << " " << b << endl;
    return 0;
}
