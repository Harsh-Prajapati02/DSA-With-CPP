#include <iostream>
using namespace std;

int main()
{
    // Write a C++ program to swap two numbers without using a temporary variable and without using the + and - operators.
    int a = 10, b = 20;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a * b; // a = 10 * 20 = 200
    b = a / b; // b = 200 / 20 = 10
    a = a / b; // a = 200 / 10 = 20

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}