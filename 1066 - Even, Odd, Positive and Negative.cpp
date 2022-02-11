/*https://www.beecrowd.com.br/judge/en/problems/view/1066*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int i = 1, num;
    int even = 0, odd = 0, positive = 0, negative = 0;
    while(i <= 5)
    {
        i++;
        cin >> num;
        if(num % 2 == 0)
        {
            even++;
        }
        if(num % 2 != 0)
        {
            odd++;
        }
        if(num > 0)
        {
            positive++;
        }
        if(num < 0)
        {
            negative++;
        }
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << positive << " valor(es) positivo(s)" << endl;
    cout << negative << " valor(es) negativo(s)" << endl;
    return 0;
  }
