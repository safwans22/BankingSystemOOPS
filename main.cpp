#include <iostream>
using namespace std;

class BankAccount {
    private:
        string accountNumber;
        string accountHolderName;
        double balance;

    public:
        void createAccount() {
            cout << "Enter account number: ";
            cin >> accountNumber;
            cout << "Enter account holder name: ";
            cin >> accountHolderName;
            cout << "Enter initial balance: ";
            cin >> balance;
        }

        void deposit() {
            double amount;
            cout << "Enter deposit amount: ";
            cin >> amount;
            balance += amount;
            cout << "Deposit successful. New balance is: " << balance << endl;
        }

        void withdraw() {
            double amount;
            cout << "Enter withdrawal amount: ";
            cin >> amount;
 if (balance >= amount) {
                balance -= amount;
                cout << "Withdrawal successful. New balance is: " << balance << endl;
            } else {
                cout << "Withdrawal failed. Insufficient balance." << endl;
            }
        }

        void displayBalance() {
            cout << "Account number: " << accountNumber << endl;
            cout << "Account holder name: " << accountHolderName << endl;
            cout << "Current balance: " << balance << endl;
        }
};

int main() {
    BankAccount account;
    int choice;

    while (true) {
        cout << "Enter choice:" << endl;
        cout << "1. Create account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Display balance" << endl;
        cout << "5. Exit" << endl;
        cin >> choice;

        switch(choice) {
            case 1:
account.createAccount();
                break;
            case 2:
                account.deposit();
                break;
            case 3:
                account.withdraw();
                break;
            case 4:
                account.displayBalance();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice." << endl;
        }
    }

return 0;
}
