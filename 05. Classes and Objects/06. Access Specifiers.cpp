
//The three levels of access specifiers are
//public, protected, and private


#include <iostream>
#include <string>
using namespace std;

class myClass {
  public:
    string name;
};

int main() {
  myClass myObj;
  myObj.name = "SoloLearn";
  cout << myObj.name;
  return 0;
}

//Outputs "SoloLearn"
