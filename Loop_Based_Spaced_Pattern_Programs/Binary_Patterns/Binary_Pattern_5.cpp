#include <iostream>
using namespace std;

// 1 1 1 1 1
//   0 0 0 0
//     1 1 1
//       0 0
//         1

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
            if (i % 2 == 0)
            {
                cout << 0 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }

        cout << endl;
    }

    return 0;
}
