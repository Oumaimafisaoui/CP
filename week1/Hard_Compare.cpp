#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long b;
    long long c;
    long long d;
    long long a;


    cin >> a >> b >> c >> d;

    long long res1 = a ^ b;
    long long res2 = c ^ d;

    if (res1 > res2)
        cout << "YES" << endl;
    else if (res1 <= res2)
        cout << "NO" << endl;
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}