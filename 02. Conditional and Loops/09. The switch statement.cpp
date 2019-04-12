#include <iostream>
using namespace std;

int main()
{
    int age = 42;

    switch (age)
    {
    case 16:
        cout << "Too young";
        break;
    case 42:
        cout << "Adult";
        break;

    case 70:
        cout << "Too Old";
        break;

    default:
        cout << "This is default case";
    }

    return 0;
}
