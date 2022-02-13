/*https://www.beecrowd.com.br/judge/en/problems/view/1019*/
#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int input;
    int second, minute, hour;
    cin >> input;
    hour = input/3600;
    minute = (input%3600)/60;
    second = input%60;
    cout << hour << ":" << minute << ":" << second <<endl;
    return 0;
}
