/*https://www.beecrowd.com.br/judge/en/problems/view/1017*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    int time, speed, distance;
    double consume;
    cin >> time >> speed;
    distance = time * speed;
    consume = (double)distance / 12;
    cout << fixed << setprecision(3) << consume << endl;
    return 0;
}
