#include <iostream>
using namespace std;

int main() {

//Numeric Data Types

//Integers (whole numbers), such as -7, 42.
//Floating point numbers, such as 3.14, -42.67.

// A string is composed of numbers, characters,
// or symbols. String literals are placed in double quotation marks

// Characters are single letters or
// symbols, and must be enclosed between single quotes, like 'a', 'b', etc.

// The Boolean data type returns just two possible values: true (1) and false (0).

int a = 42;
//Several of the basic types, including integers, can be modified using one or more of these type modifiers:
//signed: A signed integer can hold both negative and positive numbers.
//unsigned: An unsigned integer can hold only positive values.
//short: Half of the default size.
//long: Twice the default size


double b = 4.21;
//There are three different floating point data types: float, double, and long double.
//In most modern architectures, a float is 4 bytes, a double is 8, and
// a long double can be equivalent to a double (8 bytes), or 16 bytes.


string c = "I am Learning C++";
// A string is an ordered sequence of characters, enclosed in double quotation marks.
// The <string> library is included in the <iostream> library

char d = 'S';
// A char variable holds a 1-byte integer.
// A character is enclosed between single quotes (such as 'a', 'b', etc).


bool online = false;
//Boolean variables only have two possible values: true (1) and false (0).
//To declare a boolean variable, we use the keyword bool.



cout << a << endl << b << endl<< c << endl<< d << endl<< online;


return 0;
}
