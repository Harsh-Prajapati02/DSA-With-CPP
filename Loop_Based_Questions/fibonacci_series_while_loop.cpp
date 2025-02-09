#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, nextTerm = 0;
    cout << "Enter the number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: " << a << " " << b << " ";
    int count = 2;

    while (count < n) {
        nextTerm = a + b;
        cout << nextTerm << " ";
        a = b;
        b = nextTerm;
        count++;
    }
    return 0;
}
