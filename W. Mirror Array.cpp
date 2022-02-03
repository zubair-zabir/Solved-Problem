/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N,M;
    cin >> N >> M;
    int A[100][100];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < N; i++)
    {
        for(int j = M - 1; j >= 0; j--)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
