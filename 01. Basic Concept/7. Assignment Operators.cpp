#include <iostream>
using namespace std;

int main() {
// Assignment Operators

int x = 10;

x += 4; // equivalent to x = x + 4
cout <<" X is : " << x <<"\n";

x -= 5; // equivalent to x = x - 5
cout <<" X is : " << x <<"\n";

x *= 3; // equivalent to x = x * 3
cout <<" X is : " << x <<"\n";

x /= 2; // equivalent to x = x / 2
cout <<" X is : " << x <<"\n";

x %= 4; // equivalent to x = x % 4
cout <<" X is : " << x <<"\n";


//  Increment Operator
x++; //equivalent to x = x + 1
cout <<" X is : " << x <<"\n";
// ++x; // prefix
// x++; // postfix

// Prefix increments the value, and then proceeds with the expression.
// Postfix evaluates the expression and then performs the incrementing

// Decrement Operator

--x; // prefix
x--; // postfix
cout <<" X is : " << x <<"\n";





return 0;
}
