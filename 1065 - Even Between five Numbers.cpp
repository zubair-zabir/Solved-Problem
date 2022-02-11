/*https://www.beecrowd.com.br/judge/en/problems/view/1065*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int i = 1, num, cnt = 0;
    while(i <= 5)
    {
        i++;
        cin >> num;
        if(num % 2 == 0)
        {
            cnt++;
        }

    }
    cout << cnt << " valores pares" << endl;
    return 0;

}
