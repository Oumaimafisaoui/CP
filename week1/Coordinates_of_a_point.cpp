#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;

    cin >> a >> b;
    if (b >= 0 && a <= 0)
        cout << "Q2" << endl;
    else if (b >= 0 && a >= 0)
        cout << "Q1" << endl;    
    else if (b <= 0 && a >= 0)
        cout << "Q4" << endl;
    else
        cout << "Q3" << endl;
    return (0);
}