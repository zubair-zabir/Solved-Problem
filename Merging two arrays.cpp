#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int c[100000];
    int d[100000];
    for(int i = 0; i < a; i++)
    {
        cin >> c[i];
    }
    for(int i = 0; i < b; i++)
    {
        cin >> d[i];
    }
    int n = a + b;
    int e [200000];
    for(int i = 0, j = 0; i < n; i++)
    {
        if(i < a)
            e[i] = c[i];
        else
        {
            e[i] = d[j];
            j++;
        }
    }
    for(int i = 0; i <n; i++)
    {
        cout << e[i] << " ";
    }
    cout << endl;
}
