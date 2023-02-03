#include <iostream>

using namespace std;

int main()
{
    int a, b;
    char c;

    cin >> a >> c >> b;

    if (a > b)
    {
        if(c == '>')
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    else if (a < b)
    {
        if(c == '<')
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl;
    }
    else if (a == b)
    {
        if(c == '=')
            cout << "Right" << endl;
        else
            cout << "Wrong" << endl; 
    }

}