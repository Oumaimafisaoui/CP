#include <iostream>
using namespace std;

int main()
{
    int a, b = 0;
    cin >> a >> b;
    (a % b == 0  || b % a == 0) ? cout << "Multiples\n" : cout << "No Multiples\n";
    return (0);
}