/*https://www.beecrowd.com.br/judge/en/problems/view/1043*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
    double A, B, C;
    cin >> A >> B >> C;
    if(((A + B) > C) && ((B + C) > A) && ((C + A) > B)){
        double P;
        P = A + B + C;
        cout << fixed << setprecision(1) << "Perimetro = " << P << endl;
    }
    else{
        double D;
        D = .5 * (A + B) * C;
        cout << fixed << setprecision(1) << "Area = " << D << endl;
    }
    return 0;
}
