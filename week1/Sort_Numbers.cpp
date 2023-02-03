#include <iostream>

using namespace std;

int main()
{
    int a, b , c;

    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        if (c >= b)
            cout << b << "\n" << c << "\n" << a << endl;
        else
            cout << c << "\n" << b << "\n" << a << endl;
    }
    else if (b >= a && b >= c)
    {
        if (c <= a)
            cout << c << "\n" << a << "\n" << b << endl;
        else
            cout << a << "\n" << c << "\n" << b << endl;
    }
    else if (c >= a && c >= b)
    {
        if (a >= b)
            cout << b << "\n" << a << "\n" << c << endl;
        else
            cout << a << "\n" << b << "\n" << c << endl;
    }
    cout << "\n" << a << "\n" << b << "\n" << c << endl;
    return 0;    
}
