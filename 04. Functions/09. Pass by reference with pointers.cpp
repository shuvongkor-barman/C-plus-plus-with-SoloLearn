#include <iostream>
using namespace std;

// Passing by Value
// By default, arguments in C++ are passed by value.
// When passed by value, a copy of the argument is passed to the function.


//Passing by Reference
// Pass-by-reference copies an argument's address into the formal parameter.

void myFunc(int x)
{
    x = 100;
}


void myFunc(int *x) {
  *x = 100;
}



int main()
{
    int var = 10;
    myFunc(var);
    cout << var << endl;
// Outputs 20

 int var2 = 20;
  myFunc(&var2);
  cout << var2;
// Outputs 100

//As a result, the function has actually changed the argument's value,
//as accessed it via the pointer.

 return 0;
}

