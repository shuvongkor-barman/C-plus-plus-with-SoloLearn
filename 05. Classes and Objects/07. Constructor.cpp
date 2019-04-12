#include <iostream>
using namespace std;

// Constructors

//Class constructors are special member functions of a class.
//They are executed whenever new objects are created within that class.
//The constructor's name is identical to that of the class.
//It has no return type, not even void


//Constructors can be very useful for setting initial values for certain member variables.
//A default constructor has no parameters. However, when needed, parameters can be added to a constructor.
//This makes it possible to assign an initial value to an object when it's created,

// It's possible to have multiple constructors that take different numbers of parameters.


class myClass {

public:

    myClass() {             // without parameter
        cout << "Hey";
    }


     myClass(string nm) {       // with parameter
        setName(nm);
    }

    void setName(string x) {
      name = x;

    }

    string getName() {
    return name;
    }

private:
    string name;

};





int main() {

myClass myObj1("PLATEMAN");
myClass myObj2("ARYA");

cout << myObj1.getName() << endl;
cout << myObj2.getName();

return 0;
}
