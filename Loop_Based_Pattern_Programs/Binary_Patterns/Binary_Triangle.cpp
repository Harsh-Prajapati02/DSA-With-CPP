#include <iostream>
using namespace std;

// 1 
// 1 0 
// 1 0 1 
// 1 0 1 0 
// 1 0 1 0 1

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (j % 2) << " ";
        }
        cout << endl;
    }
    return 0;
}