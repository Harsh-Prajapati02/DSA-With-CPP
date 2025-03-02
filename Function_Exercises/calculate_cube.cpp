#include <iostream>
using namespace std;

int cube(int num)
{
    return num * num * num;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Cube of " << num << " is: " << cube(num) << endl;
    return 0;
}