#include <iostream>
using namespace std;

int main() {
    float percentage;
    cout << "Enter your percentage: ";
    cin >> percentage;

    if (percentage >= 90) {
        cout << "Grade: A+" << endl;
    } else if (percentage >= 80) {
        cout << "Grade: A" << endl;
    } else if (percentage >= 70) {
        cout << "Grade: B" << endl;
    } else if (percentage >= 60) {
        cout << "Grade: C" << endl;
    } else if (percentage >= 50) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F (Fail)" << endl;
    }

    return 0;
}
