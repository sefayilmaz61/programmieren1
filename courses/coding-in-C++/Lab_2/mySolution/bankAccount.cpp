#include <iostream>

class BankAccount {

private:
    std::string owner;
    double balance;

public:
    void setOwner(std::string ownerName)
    {
        owner = ownerName;
    }

    std::string getOwner()
    {
        return owner;
    }

    void deposit(double amount)
    {
        if (amount <= 0)
        {
            std::cout << "Ungültiger Betrag" << std::endl;
            return;
        }
        else
        {
            balance = balance + amount;
            std::cout << "Einzahlung erfolgreich" << getBalance() << std::endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > balance)
        {
            std::cout << "Du hast nicht genügend Geld für die Abhebung von " << amount << "Euro" << std::endl;
            return;
        }
        balance = balance - amount;
        std::cout << "Neuer Kontostand nach Abhebung: " << getBalance() << std::endl;
    }

    double getBalance();
    void getAccountInfo();
};

void BankAccount::getAccountInfo()
{
    std::cout << "Owner: " << getOwner() << std::endl;
    std::cout << "Balance: " << getBalance() << std::endl;
}

double BankAccount::getBalance()
{
    return balance;
}

int main()
{
    BankAccount myAccount;
    myAccount.setOwner("Sefa Yilmaz");

    myAccount.getAccountInfo();

    myAccount.deposit(1234.12);

    myAccount.getAccountInfo();

    myAccount.withdraw(909);

    myAccount.getAccountInfo();

    myAccount.withdraw(20);

    myAccount.getAccountInfo();
}