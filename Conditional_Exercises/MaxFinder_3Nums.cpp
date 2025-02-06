#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    if (num1 == num2 && num2 == num3)
    {
        cout << "All three numbers are equal." << endl;
    }
    else
    {
        if (num1 > num2)
        {
            if (num1 > num3)
            {
                cout << "The maximum number is " << num1 << endl;
            }
            else
            {
                cout << "The maximum number is " << num3 << endl;
            }
        }
        else
        {
            if (num2 > num3)
            {
                cout << "The maximum number is " << num2 << endl;
            }
            else
            {
                cout << "The maximum number is " << num3 << endl;
            }
        }
    }

    return 0;
}
