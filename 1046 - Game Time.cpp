/*https://www.beecrowd.com.br/judge/en/problems/view/1046*/
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
   int X, Y, Z;
   cin >> X >> Y;
   if ((X > 12) && (Y < 12))
   {
       Z = Y - X;
       Z = Z + 24;
       cout << "O JOGO DUROU " << Z << " HORA(S)" << endl;
   }
   else if((X < 12) && (Y > 12))
   {
       Z = Y - X;
       cout << "O JOGO DUROU " << Z << " HORA(S)" << endl;
   }
   else if(X == Y)
   {
       cout << "O JOGO DUROU " << "24" << " HORA(S)" << endl;
   }
   return 0;
}
