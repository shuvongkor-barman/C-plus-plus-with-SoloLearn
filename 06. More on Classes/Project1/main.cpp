#include <iostream>
#include "MyClass.h"
using namespace std;

int main()
{
    MyClass obj;

    // Dot Operator
    obj.myPrint();

MyClass *ptr = &obj;
//cout << ptr;

//The arrow member selection operator (->) is used to access an object's members with a pointer.

ptr-> myPrint();


//When working with an object, use the dot member selection operator (.).
//When working with a pointer to the object, use the arrow member selection operator (->).

    return 0;
}
