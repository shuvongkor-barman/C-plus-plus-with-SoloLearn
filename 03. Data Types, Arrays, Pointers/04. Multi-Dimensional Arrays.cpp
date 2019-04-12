#include <iostream>
using namespace std;

int main()
{

// Multi-Dimensional Array

    int myArray[3][4];  // x[rows][columns];


    int x[2][3] =
    {
        {2, 3, 4}, // 1st row
        {8, 9, 10} // 2nd row
    };

//You can also write the same initialization using just one row.
    int myArray2[2][3] = {{2, 3, 4}, {8, 9, 10}};

    cout << myArray2[0][0] << endl;
    cout << myArray2[0][1] << endl;
    cout << myArray2[0][2] << endl;
    cout << myArray2[1][0] << endl;
    cout << myArray2[1][1] << endl;


// Arrays can contain an unlimited number of dimensions.
    string threeD[42][8][3];  // Three dimensional array



    return 0;
}
