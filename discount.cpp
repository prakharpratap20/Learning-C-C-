#include <iostream>

using namespace std;

int main() {
    float amount, disAmount;
    cout << "Enter your bill amount: ";
    cin >> amount;
    if (amount < 100){
        cout << "Amount to be paid: " << amount << endl;
    } else if (amount >= 100 && amount < 500) {
        disAmount = 0.10 * amount;
        cout << "Your discount amount is: "<< disAmount << endl;
        cout << "Amount Payable is:" << amount - disAmount << endl;
    } else if (amount >= 500) {
        disAmount = 0.20 * amount;
        cout << "Your discount amount is: "<< disAmount << endl;
        cout << "Amount Payable is:" << amount - disAmount << endl;
    }
}