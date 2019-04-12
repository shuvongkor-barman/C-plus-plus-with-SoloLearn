#include <iostream>
#include <string>
using namespace std;

// You must declare a function prior to calling it.
int sum(int a, int b = 2)
{
    int result = a+b;
    return result;
}

int volume(int l=1, int w=1, int h=1)
{
    return l*w*h;
}


int main()
{
    int x = 2;
    int y = 3;

//calling the function with both parameters
    int result = sum(x,y);
    cout << "Result 1: " << result << endl;

//calling the function without b
    int result2 = sum(x);
    cout << "Result 2: "<< result2 << endl;




    cout << volume() << endl;
    cout << volume(5) << endl;
    cout << volume(2, 3) << endl;
    cout << volume(3, 7, 6) << endl;

    return 0;

}

