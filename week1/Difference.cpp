#include <iostream>

using namespace std;

int main()
{
    long result;
    long num1 = 0;
    long num2 = 0;
    long num3 = 0;
    long num4 = 0;
    
    cin >> num1 >> num2 >> num3 >> num4;

    result = ((num1 * num2) - (num3 * num4));
    
    cout << "Difference = " << result << endl;
    return (0);
}