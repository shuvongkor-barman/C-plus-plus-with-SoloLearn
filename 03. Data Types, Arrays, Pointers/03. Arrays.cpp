#include <iostream>
using namespace std;

int main()
{

// Initializing Arrays

    int a[5] = {11, 45, 62, 70, 88};

    cout << a[0] <<endl; // printing the first element
    cout << a[1]; // printing the second element

    cout << endl;

    int b[5];

    b[0] = 50;

    cout << b[0] << endl << endl;

// Arrays in Loops

    int myArray[6];

    for(int i=0; i<6; i++)
    {
        myArray[i] = 6;
    }

// printing Array using for loop
    for(int i=0; i<6; i++)
    {
        cout << myArray[i] << endl;
    }

// Arrays in Calculations

    int arr[] = {1, 2, 3, 4, 5};
    int sum = 0;

    for (int x = 0; x < 5; x++)
    {
        sum += arr[x];
    }

    cout << "Total: " << sum << endl;



    return 0;


}
