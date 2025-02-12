#include <iostream>
using namespace std;
int main() {
    for (int i = 5; i >= 1; i--) {
        int num = i;
        for (int j = 1; j <= i; j++) {
            cout << num++ << " ";
        }
        cout << endl;
    }
    return 0;
}