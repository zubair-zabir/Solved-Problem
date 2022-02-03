/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N, M;
    cin >> N >> M;
    int A[100][100];
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    int X;
    cin >> X;
    int cnt = 1;
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < M; j++)
        {
            if(A[i][j] == X)
                cnt = 0;
        }
    }
    if(cnt == 0)
        cout << "will not take number" << endl;
    else
        cout << "will take number" << endl;
}
