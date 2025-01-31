#include <iostream>
using namespace std;

int main() {
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age <= 0) {
        cout << "Invalid age entered! Age must be greater than 0." << endl;
    } 
    else if (age > 120) {
        cout << "Invalid age entered! Please enter a realistic age." << endl;
    }
    else if (age < 18) {
        cout << "You are not eligible to vote." << endl;
        cout << "You can vote after " << 18 - age << " years." << endl;
    } 
    else {
        cout << "You are eligible to vote." << endl;
    }

    return 0;
}
