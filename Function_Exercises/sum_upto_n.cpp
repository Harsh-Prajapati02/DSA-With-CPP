#include <iostream>
using namespace std;

int sum(int num)
{
    int sum = 0;
    for (int i = 1; i <= num; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Sum from 1 to " << num << " is: " << sum(num) << endl;
    return 0;
}