#include <iostream>

using namespace std;

int main() {
    int units;
    double billAmount;

    cout << "Enter the number of electricity units consumed: ";
    cin >> units;

    if (units <= 0) {
        // Enter a valid number of units
        cout << "Invalid input. Please enter a valid number of units.";
        return 0;
    }

    if (units <= 50) {
        billAmount = units * 7.0;
    } 
    else if (units <= 100) {
        billAmount = (50 * 7.0) + ((units - 50) * 7.5);
    } 
    else if (units <= 150) {
        billAmount = (50 * 7.0) + (50 * 7.5) + ((units - 100) * 8.0);
    } 
    else {
        billAmount = (50 * 7.0) + (50 * 7.5) + (50 * 8.0) + ((units - 150) * 9.0);
    }

    cout << "Total Electricity Bill: ₹" << billAmount << endl;

    return 0;
}
