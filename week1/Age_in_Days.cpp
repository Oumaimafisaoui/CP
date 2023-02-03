#include <iostream>
#include <math.h>
using namespace std;

int main()
{
   float years;
   float months;
   float days;
   float a;

    cin >> a;
    years = floor(a / 365);
    months = floor((a - (years * 365)) / 30);
    days = floor(a - ((years * 365) + (months * 30)));

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;
    return (0);
}