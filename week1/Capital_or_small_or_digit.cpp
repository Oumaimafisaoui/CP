#include <iostream>

using namespace std;

int main()
{
    char c;

    cin >> c;
    if(c >= '0' && c <= '9')
    {
        cout << "IS DIGIT" << "\n";
    }
    else if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        cout << "ALPHA" << endl;
        if(c >= 'a' && c <= 'z')
            cout << "IS SMALL" << endl;
        else
            cout << "IS CAPITAL" << endl;
    }
    return (0);
}