/*https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M*/
#include<iostream>
using namespace std;

int main ()
{
    char ch;
    cin>>ch;

    if (ch>=65 && ch<=90)
    {
        cout << "ALPHA" << endl;
        cout << "IS CAPITAL" << endl;
    }
    else if (ch>=97 && ch<=122)
    {
        cout << "ALPHA" << endl;
        cout << "IS SMALL" << endl;
    }
    else if (ch>=48 && ch<=57)
    {
        cout << "IS DIGIT" << endl;
    }

}
