#include <cstdio>
#include <cmath>
namespace Banking
{

    class Account
    {
    public:
        virtual void deposit(double) = 0;
        virtual void withdraw(double) = 0;
        double GetBalance() const;
        int GetID() const;

    protected:
        int id;
        double bal;
        static int count;
    };

    class CurrentAccount : public Account
    {
    public:
        CurrentAccount();
        CurrentAccount(double);
        void deposit(double);
        void withdraw(double);
    };
    class SavingsAccount : public Account, public Profitable
    {
    public:
        SavingsAccount(int, double);
        SavingsAccount(double);
        void deposit(double);
        void withdraw(double);
        void addInterest();
    };

    class Profitable
    {
    public:
        virtual void AddInterest() = 0;
    };
}