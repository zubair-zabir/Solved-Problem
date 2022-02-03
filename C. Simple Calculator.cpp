/*https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/C*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
/*Given two numbers X and Y. Print the summation and multiplication and subtraction of these 2 numbers.*/
{
    long long int X, Y, Sum, Prod, Sub;
    cin >> X >> Y;
    Sum = X + Y; 
    Prod = X * Y;
    Sub = X - Y;
    cout << X << " + " << Y << " = " << Sum << endl;
    cout << X << " * " << Y << " = " << Prod << endl;
    cout << X << " - " << Y << " = " << Sub << endl;
    return 0;
}
