#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long num1, num2 = 0;
    cin >> num1 >> num2;

    cout << "floor " << num1 << " / " << num2 << " = " << floor(num1 / num2) << endl;
    cout << "ceil " << num1 << " / " << num2 << " = " << ceil((double)num1 / num2) << endl;
    cout << "round " << num1 << " / " << num2 << " = " << round((double)num1 / num2) << endl;

    return (0);
}