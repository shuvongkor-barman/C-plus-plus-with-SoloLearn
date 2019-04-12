#include <iostream>
using namespace std;

int main() {

int myNumber = 1;

while(myNumber < 6) {
    cout << "Number " << myNumber << endl;
    myNumber++;
}

// calculate the sum of the numbers the user has entered.

int num = 1;
int number;
int total = 0;

while(num <= 5) {
    cout << "Enter number " << num << ": ";
    cin >> number;
    total += number;

    num++;
}

cout <<"Total is = " << total << endl;


return 0;
}
