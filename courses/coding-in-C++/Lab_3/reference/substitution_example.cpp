#include <iostream>
using namespace std;

// Basisklasse
class Account
{
protected:
    int balance; // Invariante: balance >= 0
public:
    Account(int b) : balance(0)
    {
        if (b > 0)
        {
            balance = b;
        }
    }
    //(1) erlaubt alle amount-Werte
    void withdraw(int amount)
    {
        //(2) garantiert: balance >= 0
        if (amount <= balance)
        {
            balance -= amount;
        }
    }
    int getBalance() const { return balance; }
};

// ❌ Verletzung aller 3 Regeln
class BadAccount : public Account
{
public:
    BadAccount(int b) : Account(b) {}
    void withdraw(int amount)
    {
        if (amount % 10 == 0)  // ❌ (1) stärkere Vorbedingung
            balance -= amount; // ❌ (3) kann negativ werden
                               // ❌ (2) keine Garantie mehr
    }
};

// // Abgeleitete Klasse verhält sich wie Account
class SafeAccount : public Account
{
public:
    SafeAccount(int b) : Account(b) {}
};

// Funktion erwartet Base-Typ
void process(Account &acc)
{
    acc.withdraw(10);
    cout << acc.getBalance() << endl;
}

int main()
{
    Account a(100);
    BadAccount b(100);

    // Account *array[2];
    // array[0] = &a;
    // array[1] = &b;

    a.withdraw(200);
    b.withdraw(200);

    std::cout << a.getBalance() << '\n';
    std::cout << b.getBalance() << '\n';

    // SafeAccount s(100);
    // process(a); // 90
    // process(s); // 90 → identisch
}