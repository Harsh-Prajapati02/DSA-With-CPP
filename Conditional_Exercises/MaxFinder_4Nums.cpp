#include <iostream>
using namespace std;

int main()
{
    int num1, num2, num3, num4;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    cout << "Enter the third number: ";
    cin >> num3;

    cout << "Enter the fourth number: ";
    cin >> num4;

    if (num1 == num2 && num2 == num3 && num3 == num4)
    {
        cout << "All four numbers are equal." << endl;
    }
    else
    {
        if (num1 > num2)
        {
            if (num1 > num3)
            {
                if (num1 > num4)
                {
                    cout << "The maximum number is " << num1 << endl;
                }
                else
                {
                    cout << "The maximum number is " << num4 << endl;
                }
            }
            else
            {
                if (num3 > num4)
                {
                    cout << "The maximum number is " << num3 << endl;
                }
                else
                {
                    cout << "The maximum number is " << num4 << endl;
                }
            }
        }
        else
        {
            if (num2 > num3)
            {
                if (num2 > num4)
                {
                    cout << "The maximum number is " << num2 << endl;
                }
                else
                {
                    cout << "The maximum number is " << num4 << endl;
                }
            }
            else
            {
                if (num3 > num4)
                {
                    cout << "The maximum number is " << num3 << endl;
                }
                else
                {
                    cout << "The maximum number is " << num4 << endl;
                }
            }
        }
    }

    return 0;
}
