#include <iostream>
using namespace std;

int main()
{
    // Write a C++ program to swap two numbers without using a temporary variable and without using the +, -, *, or / operators.
    int a = 10, b = 20;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a ^ b; // a = 10 ^ 20 = 30
    b = a ^ b; // b = 30 ^ 20 = 10
    a = a ^ b; // a = 30 ^ 10 = 20

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}