#include <iostream>
using namespace std;

int main()
{
    // Write a C++ program to swap two numbers using a temporary variable.
    int a = 5, b = 10;
    int temp = a;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = b; // a = 10 
    b = temp; // b = 5

    cout << "After swapping: a = " << a << ", b = " << b << endl;
    return 0;
}