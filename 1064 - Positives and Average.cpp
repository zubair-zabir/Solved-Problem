/*https://www.beecrowd.com.br/judge/en/problems/view/1064*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int i = 1, cnt = 0, n;
    double num, sum, average;
    while (i <= 6)
    {
        cin >> num;
        if(num > 0)
        {
            cnt++;
            sum+= num;
        }
        i++;
    }
    average = sum / cnt;
    cout << cnt << " valores positivos" << endl;
    cout << fixed << setprecision(1) << average << endl;
    return 0;
}
