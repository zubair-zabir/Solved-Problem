/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int A[100][100];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }
    int sum_d1 = 0;
    for(int i = 0, j = 0; i < N; i++, j++)
    {
        sum_d1 = sum_d1 + A[i][j];
    }
    int sum_d2 = 0;
    for(int i = 0, j = N - 1; i < N, j >= 0; i++, j--)
    {
        sum_d2 = sum_d2 + A[i][j];
    }
    int sum = (sum_d1 - sum_d2);
 
    cout << abs(sum) << endl;
}
