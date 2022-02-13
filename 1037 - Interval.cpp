/*https://www.beecrowd.com.br/judge/en/problems/view/1037*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double num;
    cin >> num;
    if((0 <= num) && (num <=25)){
        cout << "Intervalo [0,25]" << endl;
    }
    else if ((25 < num) && (num <= 50)){
        cout << "Intervalo (25,50]" << endl;
    }
    else if ((50 < num) && (num<= 75)){
        cout << "Intervalo (50,75]" << endl;
    }
    else if ((75 < num) && (num <= 100)){
        cout << "Intervalo (75,100]" << endl;
    }
    else{
        cout << "Fora de intervalo" << endl;
    }
    return 0;
}
