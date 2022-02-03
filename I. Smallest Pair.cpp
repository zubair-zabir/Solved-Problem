/*https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int case_no;
    cin >> case_no;
    while(case_no--)
    {
    int N, sum = 10000000;
    cin >> N;
    int A [101];
    for(int i = 1; i <= N; i++)
    {
        cin >> A[i];
    }
    for(int i = 1; i <= N; i++)
    {
        int pos_i = i;
        for(int j = i + 1; j <= N; j++ )
        {
            int pos_j = j;
            if(sum > A[i] + A[j] + pos_j - pos_i)
            {
                sum = A[i] + A[j] + pos_j - pos_i;
            }
        }
    }
    cout << sum << endl;
}
}
