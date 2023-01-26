#include <iostream>


using namespace std;

int main()
{
    string name1;
    string name2;
    string name3;
    string name4;

    cin >> name1 >> name2;
    cin >> name3 >> name4;

    if (name2 == name4)
        cout << "ARE Brothers" << endl;
    else
        cout << "NOT" << endl;
    return (0);
}