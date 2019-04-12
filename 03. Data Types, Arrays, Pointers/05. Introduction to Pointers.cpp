#include <iostream>
using namespace std;

int main()
{

// Pointers
//A pointer is a variable, with the address of another variable as its value.

//Every variable is a memory location, which has its address defined.
//That address can be accessed using the ampersand (&) operator
//(also called the address-of operator), which denotes an address in memory.

// The asterisk sign (*) is used to declare a pointer
    int score = 5;

    cout << &score << endl;

//Outputs "0x29fee8"

// Following are valid pointer declarations:

    int *ip;  // pointer to an integer
    double *dp;   // pointer to a double
    float *fp;  // pointer to a float
    char *ch;  // pointer to a character


    // Using Pointers

    int *scorePtr;
    scorePtr = &score;

    cout << scorePtr;  //Outputs "0x29fee8"


// Pointer Operations
    int var = 50;
    int  *p;
    p = &var;


    cout << var << endl;
    cout << p << endl;

    cout << "Pointer "<< *p << endl;

// Dereferencing

    int a = 5;
    int *b = &a;

    a = a + 4;
    cout << a << endl;

    a = *b + 4;
    *b = *b + 4;
    cout << a << endl << *b << endl;

// All three of the preceding statements are equivalent
// and return the same result.

    return 0;
}
