/*https://www.beecrowd.com.br/judge/en/problems/view/1012*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, pi = 3.14159;
    double triangle, circle, trapezium, square, rectangle;
    cin >> a >> b >> c;
    triangle = 0.5* a * c;
    circle = pi *(c * c);
    trapezium = ((a + b)/2) * c;
    square = b * b;
    rectangle = a * b;
    cout << fixed;
    cout << setprecision(3) << "TRIANGULO: " << triangle <<endl;
    cout << setprecision(3) <<"CIRCULO: " << circle <<endl;
    cout << setprecision(3) <<"TRAPEZIO: " << trapezium <<endl;
    cout << setprecision(3) <<"QUADRADO: " << square <<endl;
    cout << setprecision(3) <<"RETANGULO: " << rectangle <<endl;

    return 0;
}
