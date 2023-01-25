#include <iostream>

using namespace std;

int main()
{
    long long input1;
    long long input2;
    long long result;

    cin >> input1 >> input2;
    result  = (input1 % 10) + (input2 % 10);

    cout << result;

    return (0);
}