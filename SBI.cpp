#include <iostream>
using namespace std;

int main() {
    int choice;
    float balance = 10000, amount;

    do {
        cout << "\n----- SBI ATM -----\n";
        cout << "1. Check Balance\n";
        cout << "2. Withdraw Cash\n";
        cout << "3. Deposit Cash\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Your balance is: Rs. " << balance << endl;
        }
        else if (choice == 2) {
            cout << "Enter withdrawal amount: Rs. ";
            cin >> amount;

            if (amount <= 0) {
                cout << "Invalid amount.\n";
            }
            else if (amount > balance) {
                cout << "Insufficient balance.\n";
            }
            else {
                balance = balance - amount;
                cout << "Cash withdrawn successfully.\n";
                cout << "Remaining balance: Rs. " << balance << endl;
            }
        }
        else if (choice == 3) {
            cout << "Enter deposit amount: Rs. ";
            cin >> amount;

            if (amount <= 0) {
                cout << "Invalid amount.\n";
            }
            else {
                balance = balance + amount;
                cout << "Cash deposited successfully.\n";
                cout << "Updated balance: Rs. " << balance << endl;
            }
        }
        else if (choice == 4) {
            cout << "Thank you for using SBI ATM.\n";
        }
        else {
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 4);

    return 0;
}