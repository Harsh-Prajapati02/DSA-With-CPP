#include <iostream>
using namespace std;

// Function to calculate sum from 1 to N using recursion
int sum(int n)
{
    if (n == 0)
        return 0;
    return n + sum(n - 1);
}

int main()  
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Sum of numbers from 1 to " << n << " is: " << sum(n) << endl;
    return 0;
}