#include <iostream>
using namespace std;

// 0 1 0 1 0
//   1 0 1 0
//     0 1 0
//       1 0
//         0

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k < i; k++)
        {
            cout << "  ";
        }

        for (int j = 5; j >= i; j--)
        {
            cout << (!((i + j) % 2)) << " ";
        }

        cout << endl;
    }

    return 0;
}
