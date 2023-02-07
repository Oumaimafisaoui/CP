
#include <iostream>
 
using namespace std;
 
 
int main()
{
    long long l1, r1, l2, r2;
 
    cin >> l1 >> r1 >> l2 >> r2;
 
   if (l2 >= l1 && r1 >= l2 && r1 <= r2)
        cout << l2 << " " << r1 << endl;
   else if (l2 >= l1 && r2 <= r1 && r2 >= l2)
    cout << l2 << " " << r2 << endl;
   else if (l1 >= l2 && r2 <= r1 && l1 <= r2)
        cout << l1 << " " << r2 << endl;
   else if (l1 >= l2 && r1 <= r2 && r1 > l2)
        cout << l1 << " " << r1 << endl;
    else
        cout << -1 << endl;
    return (0);
}