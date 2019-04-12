#include <iostream>
using namespace std;

//Declaring a Class

class BankAccount {

public:
    void sayHi() {
    cout << "Hi" << endl;
    }
};

int main() {

BankAccount test;

test.sayHi();

return 0;
}
