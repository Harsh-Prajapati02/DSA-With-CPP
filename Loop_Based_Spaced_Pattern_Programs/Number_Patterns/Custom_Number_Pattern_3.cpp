#include <iostream>
using namespace std;

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1

int main()
{
    for (int i = 5; i >= 1; i--)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }

        for (int l = i; l < 5; l++)
        {
            cout << "    ";
        }

        for (int k = i; k >= 1; k--)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}
