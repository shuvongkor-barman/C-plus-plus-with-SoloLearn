#include <iostream>
#include <string>
using namespace std;

// Function Overloading
//When overloading functions, the definition of the function must differ from each other by the types
// and/or the number of arguments in the argument list

//You can not overload function declarations that differ only by return type.
//The following declaration results in an error.


void printNumber(int a) {
  cout << a << endl;
}

void printNumber(double a) {
  cout << a << endl;
}

void sum(int a, int b) {
cout << a + b << endl;
}

void sum(double a, double b) {
cout << a + b << endl;
}


int main()
{

    printNumber(5);
    printNumber(5.2654);

    sum(2,2);

    sum(2.2,2.2);

    return 0;

}

