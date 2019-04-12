#include <iostream>
#include <string>
using namespace std;

// A private member cannot be accessed, or even viewed,
// from outside the class

class myClass {
  public:
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
  myClass myObj;
  myObj.setName("John");
  cout << myObj.getName();

  return 0;
}

//The name attribute is private and not accessible from the outside.
//The public setName() method is used to set the name attribute.
