#include <iostream>
#include <string>
using namespace std;

// You must declare a function prior to calling it.
void printHelloWorld()
{
    cout << "Hello World!";
}

// The actual body of the function can be defined separately.

void printSomething();


int main(){

   printHelloWorld();

   printSomething();

    return 0;
}


void printSomething() {

cout << "Hi there!";

}
