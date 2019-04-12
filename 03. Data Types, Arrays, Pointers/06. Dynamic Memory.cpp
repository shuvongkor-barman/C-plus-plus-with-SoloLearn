#include <iostream>
using namespace std;

int main()
{

    int *p = new int;
    *p = 5;

// We have dynamically allocated memory for an integer,
//and assigned it a value of 5.


// The pointer p is stored in the stack as a local variable,
// and holds the heap's allocated address as its value.
// The value of 5 is stored at that address in the heap.

    cout << *p ;




// delete pointer;
// This statement releases the memory pointed to by pointer.

    delete p; // free up the memory

// Forgetting to free up memory that has been allocated with the new keyword will result in memory leaks,
// because that memory will stay allocated until the program shuts down.





//Dangling Pointers

//The delete operator frees up the memory allocated for the variable,
//but does not delete the pointer itself, as the pointer is stored on the stack.

//Pointers that are left pointing to non-existent memory locations are called dangling pointers.
//For example:

    delete p; // free up the memory

// now p is a dangling pointer

    p = new int; // reuse for a new address


//The NULL pointer is a constant with a value of zero
//that is defined in several of the standard libraries, including iostream.
//It's a good practice to assign NULL to a pointer variable when you declare it,
// in case you do not have exact address to be assigned.
//  A pointer assigned NULL is called a null pointer.
//  For example: i

    nt *ptr = NULL

// Dynamic memory can also be allocated for arrays.
    int *p = NULL; // Pointer initialized with null
    p = new int[20]; // Request memory
    delete [] p; // Delete array pointed to by p

//Dynamic memory allocation is useful in many situations, such as when your program depends on input.

    return 0;
}
