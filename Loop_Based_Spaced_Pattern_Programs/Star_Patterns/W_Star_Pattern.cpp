#include <iostream>
using namespace std;

// *       *
// *       *
// *       *
// *       *
// *   *   *
// * *   * *
// *       *

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || (i == 6 && (j == 2 || j == 4)) || (i == 5 && j == 3))
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}