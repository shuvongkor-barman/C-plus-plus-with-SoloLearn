#include <iostream>
using namespace std;

// A recursive function in C++ is a function that calls itself.

int fact(int n)
{
    if(n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

int main()
{
    int result = fact(5);
    cout << result;
    return 0;
}

