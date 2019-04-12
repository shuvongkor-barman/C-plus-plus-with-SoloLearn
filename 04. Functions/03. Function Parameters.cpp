#include <iostream>
using namespace std;

// Using Parameter
void printThis( int x)
{
    cout << x << endl;
}

int timesTwo(int x)
{
    return x*2;
}

// Multiple Parameters
int addNumbers(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    printThis(2);
    cout << timesTwo(2) << endl;
    cout << addNumbers(2,2) << endl;

    int sum = addNumbers(5,5);
    cout <<"The Sum is: " << sum;



    return 0;
}
