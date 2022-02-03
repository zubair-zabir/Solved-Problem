/*https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/D*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
/*Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.*/
{
    long long int A, B, C, D, X;
    cin >> A >> B >> C >> D;
    X = ((A * B) - (C * D));
    cout << "Difference = " << X << endl;
    return 0;
}
