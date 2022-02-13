/*https://www.beecrowd.com.br/judge/en/problems/view/1006*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double A, B, C, Media;
    cin >> A >> B >> C;
    Media = (((A * 2) + (B * 3) + (C * 5))/ (2 + 3 + 5));
    cout<< fixed << setprecision(1) << "MEDIA = " << Media <<endl;
    return 0;
}
