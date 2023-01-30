#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int input;
    int tmp;
    int res;
    int i = -1;

    cin >> input;
    tmp = input;
    while(tmp)
    {
        tmp = tmp / 10;
        i++;
    }
    i > 1 ? res = (input / pow(10,i)) : res = input;
    if(res % 2 == 0)
        cout << "EVEN" << endl;
    else if (res % 2 == 1)
        cout << "ODD" << endl;
    return (0);
}