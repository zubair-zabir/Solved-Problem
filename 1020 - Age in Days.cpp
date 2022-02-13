/*https://www.beecrowd.com.br/judge/en/problems/view/1020*/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int age;
    int year, month, day;
    cin >> age;
    year = age/365;
    cout << year << " ano(s)"<<endl;
    month = ((age%365)/30);
    cout << month << " mes(es)"<<endl;
    day = ((age%365)%30);
    cout << day << " dia(s)"<<endl;
    return 0;
}
