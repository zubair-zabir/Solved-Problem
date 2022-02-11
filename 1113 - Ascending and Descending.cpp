/*https://www.beecrowd.com.br/judge/en/problems/view/1113*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{

    int x, y;
    
    while(1)
    {
    cin >> x >> y;
    if(x > y)
    
        cout << "Decrescente" << endl;
    
    else if(y > x)
    
        cout << "Crescente" << endl;
    
    else
    
        break;
    
    }
    return 0;
}
