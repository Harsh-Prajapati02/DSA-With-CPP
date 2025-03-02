#include <iostream>
using namespace std;

int main()
{
    int rows, cols, sum = 0, count = 0;

    cout << "Enter rows and columns: ";
    cin >> rows >> cols;

    int arr[rows][cols];

    cout << "Enter elements:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> arr[i][j];
            sum += arr[i][j];
            count++;
        }
    }

    double avg = (double)sum / count;
    cout << "Average of all elements: " << avg << endl;

    return 0;
}