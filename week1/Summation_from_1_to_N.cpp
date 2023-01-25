#include <iostream>
 
using namespace std;
 
int main()
{
    long long limit;
    long long i = 0;
    long long j = 0;

    scanf("%lld",&limit);
 
    j = (limit * (limit + 1)) / 2;
    printf("%lld", j);
    return (0);
}