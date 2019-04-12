#include <iostream>
using namespace std;

void printArray(int a[], int size)
{
    for(int i=0; i<size; i++)
    {
        cout << a[i] << endl;
    }

}


int main()
{
int myArray[5] = {10,20,30,40,50};

printArray(myArray, 5);

    return 0;
}

