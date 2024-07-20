#include <cstdio>
#include "Banker.h"
namespace Banking
{

    
    
    class SavingsAccount : public Account
    {
    
        SavingsAccount()
        {
            id = ++count;
            bal = 5000;
        }

        SavingsAccount(double b)
        {
            id = ++count;
            bal = 5000 + b;
        }

        void Deposit(double b)
        {
            bal = bal + b;
        }

        void Withdraw(double b)
        {
            if ((bal - b) < 5000)
                throw b;
            bal = bal - b;
        }

        void AddInterest()
        {
            bal = bal + 0.1 * bal;
        }
    };

    class CurrentAccount : public Account
    {
    public:
        CurrentAccount()
        {
            id = ++count;
            bal = 0;
        }

        CurrentAccount(double b)
        {
            id = ++count;
            bal = b;
        }

        void Deposit(double b)
        {
            if (bal < 0)
                bal = bal + b * 0.9;
            else
                bal = bal + b;
        }

        void Withdraw(double b)
        {
            bal = bal - b;
        }
    };

    int Account::count = 100;

}
