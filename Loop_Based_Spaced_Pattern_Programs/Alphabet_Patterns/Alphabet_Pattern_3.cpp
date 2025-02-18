#include <iostream>
using namespace std;

// A B C D E
//   A B C D
//     A B C
//       A B
//         A

int main()
{
    for (char i = 'E'; i >= 'A'; i--)
    {

        for (char k = 'E'; k > i; k--)
        {
            cout << "  ";
        }

        for (char j = 'A'; j <= i; j++)
        {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
