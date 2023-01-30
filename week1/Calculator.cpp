#include <iostream>

using namespace std;

int main()
{
    int one;
    char two;
    int three;

    cin >> one >> two >> three;
    if (two == '+')
    {
        cout << one + three << endl;
    }
    if (two == '-')
    {
        cout << one - three << endl;
    }
    if (two == '*')
    {
        cout << one * three << endl;
    }
    if (two == '/')
    {
        cout << one / three << endl;
    }
    return (0);
}