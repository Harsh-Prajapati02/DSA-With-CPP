#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size of arrays: ";
    cin >> size;

    int arr1[size], arr2[size], sumArray[size];

    cout << endl;

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "arr1[" << i << "]: ";
        cin >> arr1[i];
    }

    cout << endl;

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < size; i++)
    {
        cout << "arr2[" << i << "]: ";
        cin >> arr2[i];
    }

    cout << endl;

    for (int i = 0; i < size; i++)
    {
        sumArray[i] = arr1[i] + arr2[i];
    }

    cout << endl;

    cout << "Resultant Array after Addition:\n";
    for (int i = 0; i < size; i++)
    {
        cout << sumArray[i] << " ";
    }
    cout << endl;

    return 0;
}
