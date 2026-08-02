# include<iostream>
using namespace std;

class Bank 
{
public:
// Data members
int accountNumber;
string customername;
float balance;
// Member functions

void registraction ()
{
    cout << "Welcome to the Bank Management System...." << "\n" <<"\n";
    cout << "Welcome to the State Bank of India..." << "\n" << "\n";
    cout << "Please enter the details of the customer to register an account." << "\n" << "\n";
    cout << "Enter the details of the customer....." << "\n";
cout << "Enter the account number: ";
    cin >> accountNumber;

    cin.ignore(); // To ignore the newline character left in the input buffer
    cout << "Enter the customer name: ";
    getline(cin, customername);
    cout << "Enter the balance: ";
    cin >> balance;
}

void deposite()
{
    float amount;
    cout << "Enter the amount to deposit: ";
    cin >> amount;

    balance += amount;
    cout << "Amount deposited successfully. New balance: " << balance << "\n";
}

void withdraw()
{
    float amount;
    cout << "Enter the amount to withdraw: ";
    cin >> amount;

    if (amount > balance) 
        cout << "Insufficient balance. Withdrawal failed.\n";
    if (amount <= balance) 
    {
        balance -= amount;
        cout << "Amount withdrawn successfully. New balance: " << balance << "\n";
    cout << "Remaining balance: " << balance << "\n";
    cout << "Transaction completed successfully.\n";
    cout << "Thank you for banking with us!\n";
    }
}

void display()
{
    cout << "\nCustomer Details...\n";
    cout << "Account Number: " << accountNumber << "\n";
    cout << "Customer Name: " << customername << "\n";
    cout << "Balance: " << balance << "\n";
}
};

int main()
{
    Bank SBI;
    SBI.registraction();
    SBI.deposite();
    SBI.withdraw();
    SBI.display();
    
return 0;
}
