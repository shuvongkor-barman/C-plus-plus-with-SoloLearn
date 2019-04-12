#include <iostream>
#include "MyClass.h"
using namespace std;


MyClass::MyClass()
{
    cout << "Constructor" << endl;
}

MyClass::~MyClass()
{
    cout << "Destructor" << endl;
}


void MyClass::myPrint() {
cout << "Hello World" << endl;
}
