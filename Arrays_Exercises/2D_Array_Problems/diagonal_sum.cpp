#include <iostream>
using namespace std;

int main()
{
    int size, diagonalSum = 0, antiDiagonalSum = 0;

    cout << "Enter size of square matrix: ";
    cin >> size;

    int arr[size][size];

    cout << "Enter elements:\n";
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cin >> arr[i][j];
            if (i == j)
                diagonalSum += arr[i][j]; // Primary diagonal sum
            if (i + j == size - 1)
                antiDiagonalSum += arr[i][j]; // Secondary diagonal sum
        }
    }

    cout << "Primary Diagonal Sum: " << diagonalSum << endl;
    cout << "Secondary Diagonal Sum: " << antiDiagonalSum << endl;

    return 0;
}