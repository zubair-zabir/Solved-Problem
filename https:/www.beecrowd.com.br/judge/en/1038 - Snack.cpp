/*https://www.beecrowd.com.br/judge/en/problems/view/1038*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int X, Y;
    double P;
    cin >> X >> Y;
    if (X == 1){
        X = 4;
        P = (double)(X * Y);
        cout << fixed << setprecision(2) << "Total: R$ " << P << endl;
    }
    else if (X == 2){
        double X = 4.5;
        P = (double)X * Y;
        cout << fixed << setprecision(2) << "Total: R$ " << P << endl;
    }
    else if (X == 3){
        X = 5;
        P = X * Y;
        cout << fixed << setprecision(2) << "Total: R$ " << P << endl;
    }
    else if (X == 4){
        X = 2;
        P = X * Y;
        cout << fixed << setprecision(2) << "Total: R$ " << P << endl;
    }
    else if (X == 5){
        double X = 1.50;
        P = X * Y;
        cout << fixed << setprecision(2) << "Total: R$ " << P << endl;
    }
    return 0;

}
