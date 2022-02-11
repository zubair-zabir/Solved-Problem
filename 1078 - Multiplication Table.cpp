/*https://www.beecrowd.com.br/judge/en/problems/view/1078*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int i = 0, n, m = 1;
    cin >> n;
    while(i < 10)
    {
        i++;
        m = i * n;
        cout << i << " x " << n << " = " << m << endl;
    }

}
