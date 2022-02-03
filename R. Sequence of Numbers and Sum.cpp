/*https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/R*/
#include<iostream>
using namespace std;
int main()
{
    int m, n, k, sum = 0, i, temp, d;
    for(d = 1; d > 0; d++)
    {
        cin >> m >> n;
        if(m <= 0 || n <= 0)
            break;
        else
        {
            if(m > n)
            {
                temp = m;
                m = n;
                n = temp;
            }
            for(i = m, sum = 0; m <= n; m++)
            {
                cout << m << " ";
                sum = sum + m;
            }
            cout << "sum =" << sum << endl;

        }
    }
}
