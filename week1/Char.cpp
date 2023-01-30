#include <iostream>

using namespace std;

int main()
{
    char c;

    cin >> c;
    if(c >= 'a' && c <= 'z')
    {
        cout << (char)(c - 32) << "\n";
    }
    else
    {
        cout << (char)(c + 32) << endl;
    }
    return (0);
}