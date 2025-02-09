#include <iostream>
using namespace std;

int main() {
    cout << "Leap years between 2000 and 3000:\n";

    for (int year = 2000; year <= 3000; year++) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            cout << year << " ";
        }
    }
    return 0;
}
