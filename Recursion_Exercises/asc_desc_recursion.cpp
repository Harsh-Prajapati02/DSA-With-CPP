#include <iostream>
using namespace std;

void printBothWays(int num, int start = 1)
{
    if (start > num)
        return;

    cout << start << " ";
    printBothWays(num, start + 1);
    cout << start << " ";
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << " and back to 1: ";
    printBothWays(n);
    cout << endl;

    return 0;
}