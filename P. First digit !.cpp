/*https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/P*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
   int n, m;
   cin >> n;
   m = n / 1000;
   if(m % 2 == 0)
    cout << "EVEN" << endl;
   else
    cout << "ODD" << endl;
   return 0;
}
