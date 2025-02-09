#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Using White Loop
    while (n >= 1) {
        if (n % 2 == 0) {
            cout << n << " " << endl;
        }
        n--;
    }

    cout << endl;

    // Using For Loop
    for (int i = n; i >= 1; i--) {
        if (i % 2 == 0) {
            cout << i << " " << endl;
        }
    }

    return 0;
}
