/*https://www.beecrowd.com.br/judge/en/problems/view/1154*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int age, sum = 0, cnt = 0;
    double avg;
    while(1)
    {
        cin >> age;
        if (age > 0)
        {
        sum += age;
        cnt++;
        }
        else
            break;
     }
     avg = (double)sum /cnt;
     cout << fixed << setprecision(2) << avg << endl;
     return 0;
}
