
#ifndef BANKINGAPP_ACCOUNT_H
#define BANKINGAPP_ACCOUNT_H
using namespace std;
#include <string>;

class account {
public:
    account();
    void Deposit(double amount);
    void Withdraw(double amount, double balance);
    double checkBalance() const;
    void displayAccountDetails()const;

private:
    string firstName;
    string surName;
    string accountNumber;
    double balance;
};


#endif //BANKINGAPP_ACCOUNT_H
