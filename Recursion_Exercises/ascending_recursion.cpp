#include <iostream>
using namespace std;

void printAscending(int num, int current = 1)
{
    if (current > num)
        return;
    cout << current << " ";
    printAscending(num, current + 1);
}

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Numbers from 1 to " << n << ": ";
    printAscending(n);
    cout << endl;

    return 0;
}