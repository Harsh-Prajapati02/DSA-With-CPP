#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 1)
            cout << "- ";
        else
            cout << "| ";
        for (int j = 1; j < i; j++) {
            if (j % 2 == 1)
                cout << "| ";
            else
                cout << "- ";
        }
        cout << endl;
    }
    return 0;
}