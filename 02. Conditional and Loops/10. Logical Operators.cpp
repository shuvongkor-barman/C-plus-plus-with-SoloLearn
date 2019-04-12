#include <iostream>
using namespace std;

int main()
{
    // &&    AND operator    True only if both condition true
    // ||    OR operator     True if anyone or both condition true
    // !     NOT operator    True if condition is false


    int age = 20;
    int grade = 80;

    if (age > 16 && age < 60 && grade > 50)
    {
        cout << "Accepted!" << endl;
    }

// OR

int age = 16;
int score = 90;
if (age > 20 || score > 50) {
    cout << "Accepted!" << endl;
}

// Outputs "Accepted!"



    return 0;
}
