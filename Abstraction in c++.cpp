//Abstraction means hiding unnecessary implementation details and showing only the essential information to the user.
//When you withdraw money from an ATM, you only interact with options like:
//   1. Enter PIN        2. Check balance         3. Withdraw money       4. Deposit money       5. Exit

#include <iostream>
using namespace std;

class ATM
{
private:

    int pin; // Private member variable to store the PIN
    float balance; // Private member variable to store the balance

public:

    ATM() {

        balance = 2000.0; // Initial balance

        pin = 11092007; // Set a default PIN

    }

    bool verifyPIN() {

        int enteredPin;

        cout << "Enter the PIN: ";

        cin >> enteredPin;

        if (enteredPin == pin) {

            cout << "PIN verified successfully!" << endl;

            return true;

        } else {

            cout << "Incorrect PIN!" << endl;

            return false;

        }

    }

    void depositMoney() {

        int amount;

        cout << "Enter amount to deposit: ";

        cin >> amount;

        if (amount > 0) {

            balance += amount;

            cout << "Money deposited successfully!" << endl;

        } else {

            cout << "Invalid amount!" << endl;

        }

    }

    void withdrawMoney() {

        int amount;

        cout << "Enter amount to withdraw: ";

        cin >> amount;

        if (amount <= 0) {

            cout << "Invalid amount!" << endl;

        }

        else if (amount > balance) {

            cout << "Insufficient balance!" << endl;

        }

        else {

            balance -= amount;

            cout << "Money withdrawn successfully!" << endl;

        }

    }

    void enterMoney() {

        int amount;

        cout << "Enter money: ";

        cin >> amount;

        if (amount > 0) {

            balance += amount;

            cout << "Money entered successfully!" << endl;

        } else {

            cout << "Invalid amount!" << endl;

        }

    }

    void checkBalance() {

        cout << "Current Balance: Rs. " << balance << endl;

    }

};

int main() {

    ATM atm;

    // PIN verification

    if (!atm.verifyPIN()) {

        cout << "Access Denied!" << endl;

        return 0;

    }

    int choice;

    do {

        cout << "\n========== ATM MENU ==========" << endl;

        cout << "1. Deposit Money" << endl;

        cout << "2. Withdraw Money" << endl;

        cout << "3. Enter Money" << endl;

        cout << "4. Check Balance" << endl;

        cout << "5. Exit" << endl;

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {

            case 1:

                atm.depositMoney();

                break;

            case 2:

                atm.withdrawMoney();

                break;

            case 3:

                atm.enterMoney();

                break;

            case 4:

                atm.checkBalance();

                break;

            case 5:

                cout << "Thank you for using ATM!" << endl;

                break;

            default:

                cout << "Invalid choice!" << endl;

        }

    } while (choice != 5);

    return 0;

}
