#include <iostream>
using namespace std;

void printTables(int num)
{
    for (int i = 1; i <= num; i++)
    {
        cout << "Table of " << i << ":\n";
        for (int j = 1; j <= 10; j++)
        {
            cout << i << " x " << j << " = " << i * j << endl;
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    printTables(num);
    return 0;
}
