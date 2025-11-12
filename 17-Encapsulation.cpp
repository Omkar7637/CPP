// Encasulation (Data + function together)
// We keep variables private and use public function to access them.

#include<iostream>
using namespace std;

class BankAccount
{
    private: 
        int balance;

    public:
        
        void setBalance(int b)
        {
            balance = b;
        }

        int getBalance()
        {
            return balance;
        }

};

int main()
{
    BankAccount b1;
    
    b1.setBalance(1000000);
    cout << b1.getBalance();


    return 0;
}