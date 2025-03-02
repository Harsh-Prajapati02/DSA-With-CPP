#include <iostream>
using namespace std;

int main()
{
    int rows, cols, maxElement;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            if (i == 0 && j == 0) // Initialize maxElement
                maxElement = arr[i][j];
            else if (arr[i][j] > maxElement)
                maxElement = arr[i][j];
        }
    }

    cout << "Maximum element: " << maxElement << endl;

    return 0;
}