#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cout << "Enter a number: ";
    cin >> n;

    // Using While Loop
    while (i <= n) {
        cout << i << " " << endl;
        i++;
    }

    cout << endl;

    // Using For Loop
    for (int i = 1; i <= n; i++) {
        cout << i << " " << endl;
    }

    return 0;
}