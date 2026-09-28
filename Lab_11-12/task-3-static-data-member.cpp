#include <iostream>
#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string accountHolderName;
    double balance;

    static int totalAccounts;

public:
    // Constructor
    BankAccount(string name, double bal)
    {
        accountHolderName = name;
        balance = bal;

        // Increase whenever an object is created
        totalAccounts++;
    }

    void displayAccount()
    {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Balance: " << balance << endl;
    }

    static void displayTotalAccounts()
    {
        cout << "Total Bank Accounts: "
             << totalAccounts << endl;
    }
};

// Initialization of static data member
int BankAccount::totalAccounts = 0;

int main()
{
    BankAccount account1("Adnan", 50000);
    BankAccount account2("Sara", 75000);
    BankAccount account3("fatima", 30000);

    cout << "Account 1" << endl;
    account1.displayAccount();

    cout << "\nAccount 2" << endl;
    account2.displayAccount();

    cout << "\nAccount 3" << endl;
    account3.displayAccount();

    cout << endl;

    BankAccount::displayTotalAccounts();

    return 0;
}
