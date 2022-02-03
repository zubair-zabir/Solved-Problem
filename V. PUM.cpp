/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/V*/
#include<iostream>
using namespace std;
int main()
{
     int i, n, k = 1;
     cin >> n;
     for(i = 1; i <= n; i++)
     {
         for(int j = 1; j <= 4; j++, k++)
         {
             if (j % 4 == 0)
             cout << "PUM";
             else
                cout << k << " ";
         }
         cout << endl;
     }
}
