#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// rand(). When used, we are required to include the header <cstdlib>.


int main()
{

    for(int i=0; i<10; i++)
    {
        cout <<"Number Generated: " << rand() << endl;
    }


    for(int i=0; i<=10; i++)
    {
       //  generates  numbers within a range of 1 to 6.
        cout << 1 + rand() % 6 << endl;
    }

// Note: However, the rand() function will only return a pseudo random number.
// This means that each time the code is run, it generates the same numbers.

    srand(90);
    for(int i=0; i<=10; i++)
    {
        //  generates  numbers within a range of 1 to 6.
        cout << "using srand: " << 1 + rand() % 6 << endl;
    }


// Truly Random Numbers

srand(time(0));

for(int i=0; i<=10; i++)
    {
        //  generates  numbers within a range of 1 to 6.
        cout << "using srand time: " << 1 + rand() % 10 << endl;
    }




}

