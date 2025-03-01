#include <iostream>
using namespace std;

// *       *
// *       *
//   *   *
//     *
//     *
//     *
//     *

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((i >= 1 && i <= 2 && j >= 2 && j <= 4 || (i >= 4 && j != 3) || (i == 3 && (j % 2 == 1))))
                cout << "  ";
            else
                cout << "* ";
        }
        cout << endl;
    }
    return 0;
}