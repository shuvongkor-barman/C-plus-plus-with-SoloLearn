#include <iostream>
using namespace std;

int main() {
// User Input by cin
// cin can be chained to request more than one input
// in a single statement: cin >> a >> b;

int num, num2;

cout << "Please enter a number \n";
cin >> num;

cout << "Please enter another number \n";
cin >> num2;

cout <<"Your numbers are : " << num <<" and " <<num2 <<"\n";

cout <<"Your numbers sum is : " << num+num2;

return 0;
}
