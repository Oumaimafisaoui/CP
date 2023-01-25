#include <iostream>
#include <iomanip>
#define PI 3.141592653

using namespace std;
 
 
int main()
{
    double r;
    long long result;
    
    cin >> r;
    
    cout << fixed << setprecision(9);

    
    cout << ((r * r) * PI) << "\n";
    return (0);
}