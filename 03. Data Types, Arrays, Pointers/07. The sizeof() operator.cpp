#include <iostream>
using namespace std;

int main()
{

    cout << "char: " << sizeof(char) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long int: " << sizeof(long int) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;
    int var = 50;
    cout << "var: " << sizeof(var) << endl;

    cout << endl;

// Output
// char: 1
// int: 4
// long int: 4
// float: 4
// double: 8
// long double: 12
// var: 4


double myArray[10];

cout << "Array Size: " << sizeof(myArray) << endl;

// Output 80
// Why ?
// On our machine, double takes 8 bytes.
// The array stores 10 doubles, so the entire array occupies 80 (8*10) bytes in the memory


cout << "Array Total Element: " << sizeof(myArray)/ sizeof(myArray[0]);



cout << endl;

    return 0;
}
