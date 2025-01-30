#include <iostream>
using namespace std;

int main()
{
    // Write a C++ program to swap two numbers without using a temporary variable.
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a + b; // a = 5 + 10 = 15
    b = a - b; // b = 15 - 10 = 5
    a = a - b; // a = 15 - 5 = 10

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}