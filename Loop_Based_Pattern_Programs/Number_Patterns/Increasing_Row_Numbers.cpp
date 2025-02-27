#include <iostream>
using namespace std;

// 5 6 7 8 9 
// 4 5 6 7 
// 3 4 5 
// 2 3 
// 1

int main()
{
    for (int i = 5; i >= 1; i--)
    {
        int num = i;
        for (int j = 1; j <= i; j++)
        {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}