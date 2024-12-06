#ifndef ACCOUNT_HXX
#define ACCOUNT_HXX

#include <string>
using namespace std;

class Account
{
    public:
    
        Account()
        {
            myAccountNumber = 0;
            myBalance = 0.0;
        }
        explicit Account(double initial)
        {
            myAccountNumber = 0;
            myBalance = initial;
            //2024-11-07: 12:18
            //2024-11-07: 12:23
            //2024-11-07: 12:46
            //2024-11-07: 12:49
            //2024-11-07: 12:53
            //2024-11-07: 12:55 remove violation by add explicit
            //2024-11-07: 12:56 keep explicit
            //2024-11-07: 12:57 add violation by removing explicit
            //2024-11-07: 12:57 add violation by removing explicit
            //2024-11-07: 13:03 add violation by removing explicit
            //2024-11-07: 13:07 add violation by removing explicit
            //2024-11-07: 13:27 add violation by removing explicit to Default Project
            //2024-11-07: 13:30 add violation by removing explicit to Default Project build.id=c++test-2024-11-07a
            //2024-11-07: 13:43 new Base add violation by removing explicit to Default Project
            //2024-11-07: 13:43 new Base add violation by removing explicit to cpptest build.id=c++test-2024-11-07a
            //2024-11-07: 13:47 new Base add violation by removing explicit to cpptest build.id=c++test-2024-11-07b
            //2024-11-07: 13:53 new Base add violation by removing explicit to cpptest build.id=c++test-2024-11-07b
            //2024-11-07: 13:53 new Base add violation by removing explicit to Default Project build.id=c++test-2024-11-07b
            //2024-11-07: 14:12 new Base add violation by removing explicit to cpptest build.id=c++test-2024-11-07b
            //2024-11-07: 14:18 new Base add violation by removing explicit to Default Project build.id=c++test-2024-11-07c
            //2024-11-07: 15:20
        }

        double getBalance()
        {
            return (myBalance);
        }
        int getAccountNumber() const
        {
            return (myAccountNumber);
        }

        void setAccountNumber(int num)
        {
            myAccountNumber = num;
        }
        void setPassword(const char* password)
        {
            myPassword = password;
        }
        const char* getPassword()
        {
            return (myPassword.data());
        }   
 
        double deposit(double amount);
        
        double debit(double amount);

    private:

        int myAccountNumber;
        double myBalance;
        string myPassword;
};

#endif // ACCOUNT_HXX
