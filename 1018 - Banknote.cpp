/*https://www.beecrowd.com.br/judge/en/problems/view/1018*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a;
    cout << a << endl;
    b = a / 100;
    cout << b << " nota(s) de R$ 100,00" << endl;
    b = a % 100;
    b = b / 50;
    cout << b << " nota(s) de R$ 50,00" << endl;
    b = ((a % 100) % 50) / 20;
    cout << b << " nota(s) de R$ 20,00" << endl;
    b = (((a % 100) % 50) % 20) / 10;
    cout << b << " nota(s) de R$ 10,00" << endl;
    b = ((((a % 100) % 50) % 20) % 10) / 5;
    cout << b << " nota(s) de R$ 5,00" << endl;
    b = (((((a % 100) % 50) % 20) % 10) % 5) / 2;
    cout << b << " nota(s) de R$ 2,00" << endl;
    b = ((((((a % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    cout << b << " nota(s) de R$ 1,00" << endl;
}
