#include <iostream>
using namespace std;

void printDescending(int num)
{
    if (num < 1)
        return;
    cout << num << " ";
    printDescending(num - 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from " << n << " to 1: ";
    printDescending(n);
    cout << endl;

    return 0;
}