#include <iostream>
using namespace std;

int main()
{
    int rows, cols, boundarySum = 0;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];

            // If element is on the boundary, add to sum
            if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1)
                boundarySum += arr[i][j];
        }
    }

    cout << "Boundary Elements Sum: " << boundarySum << endl;

    return 0;
}