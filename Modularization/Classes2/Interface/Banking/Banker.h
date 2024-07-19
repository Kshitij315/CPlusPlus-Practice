#include <cstdio>
#include <cmath>
namespace Banking
{

    class  Account
    {
        public:
            virtual void deposit(double)=0;
            virtual void withdraw(double)=0;
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
        CurrentAccount(int , double);
        void deposit(double);
        void withdraw(double);
    
};
class SavingsAccount : public Account
    {
        public:
            SavingsAccount(int , double);
            void deposit(double);
            void withdraw(double);
    }

    
}