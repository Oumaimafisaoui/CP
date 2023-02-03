#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main()
{
    float a;
    cin >> a;

    if ((int)a == a)
        cout << "int" << " " << a << endl;
    else
        cout << setprecision(3) << "float " << floor(a) << " " <<  a - (int)a << endl;
}