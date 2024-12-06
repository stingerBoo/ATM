#include "Account2.hxx"

double Account2::deposit(double amount)
{
    myBalance += amount;
    return (getBalance());
}


double Account2::debit(double amount)
{
    myBalance -= amount;
    return (getBalance());
}
