/*https://www.beecrowd.com.br/judge/en/problems/view/1114*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int pass = 2002, n;
    while(1)
    {
        cin >> n;
        if(n != pass)
        {
            cout << "Senha Invalida" << endl;
        }
        else
        {
            cout << "Acesso Permitido" << endl;
            break;
        }
    }
return 0;
}
