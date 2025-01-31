#include <iostream>
using namespace std;

int main() {
    int amount, discount, discountAmount, finalAmount;

    cout << "Enter the shopping amount: ";
    cin >> amount;

    if (amount <= 500 && amount > 0) {
        discount = 5;
    } else if (amount > 500 && amount <= 1000) {
        discount = 10;
    } else if (amount > 1000 && amount <= 5000) {
        discount = 15;
    } else if (amount > 5000 && amount <= 10000) {
        discount = 20;
    } else if (amount > 10000) {
    	discount = 25;
	} else {
		cout << "Invalid amount entered!" << endl;
	}
	
	discountAmount = (amount * discount) / 100;
	finalAmount = amount - discountAmount;
	
	if (amount > 0) {
		cout << "Original Amount: " << amount << endl;
    	cout << "Discount: " << discount << "%" << endl;
    	cout << "Discount Amount: " << discountAmount << endl;
    	cout << "Final Amount after Discount: " << finalAmount << endl;
	}

    return 0;
}
