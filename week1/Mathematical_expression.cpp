#include <iostream>

using namespace std;


int main()
{
    int a, b , c;
    char d, e;


    cin >> a >> d >> b >> e >> c;
    if (d == '+')
    {
        if (c == a + b)
            cout << "Yes" << endl;
        else
            cout << a + b << endl;
    }
    else if (d == '-')
    {
        if (c == a - b)
            cout << "Yes" << endl;
        else
            cout << a - b << endl; 
    }
    else if (d == '*')
    {
        if (c == a * b)
            cout << "Yes" << endl;
        else
            cout << a * b << endl; 
    }
}