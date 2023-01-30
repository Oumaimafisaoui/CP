#include <iostream>

using namespace std;

int main()
{
   int a;
   int years;
   int months;
   int days;

    cin >> a;
    years = a / 365;
    days = a / 80;

    cout << years << " years" << endl;
    if (a <= 30)
    {
        months = a / 30;
        cout << months << " months" << endl;
    }
    else
    {
        months = a / 400;
        cout << months << " months" << endl;
    }
    cout << days << " days" << endl;
    return (0);
}