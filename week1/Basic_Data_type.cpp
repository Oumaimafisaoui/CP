#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char **argv)
{
    int var;
    long long var1 = 0;
    char var2 = 0;
    double var3 = 0;
    double var4 = 0;
    
    cin >> var >> var1 >> var2 >> var3 >> var4;
        
    cout << var << "\n" << var1 << "\n" << var2 << "\n" << var3 << "\n";

    std::cout << std::fixed;
    std::cout << std::setprecision(5);
    
    cout << var4 << "\n" << endl;

    return (0);
}