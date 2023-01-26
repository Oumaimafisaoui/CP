#include <iostream>

using namespace std;

void find_min(int a , int b, int c)
{
    if((a <= b && a < c) || (a < b && a <= c))
        cout << a << " ";
    else if((b < a && b <= c) || (b <= a && b < c))
        cout << b << " ";
    else if((c < a && c <= b) || (c <= a && c < b))
        cout << c << " ";
    else
        cout << c << " "; 
}

void find_max(int a , int b, int c)
{
    if((a >= b && a > c) || (a > b && a >= c))
        cout << a << endl;
    else if((b >= a && b > c) || (b > a && b >= c))
        cout << b << endl;
    else if ((c >= a && c > b) || (c > a && c >= b))
        cout << c << endl;
    else
         cout << c << endl;
}
int main()
{
    int a, b , c;
    cin >> a >> b >> c;

    find_min(a, b, c);
    find_max(a , b, c);
    return (0);
}