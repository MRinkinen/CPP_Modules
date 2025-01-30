#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts(void)
{
    return (_nbAccounts);
}
int Account::getTotalAmount(void)
{
    return (_totalAmount);
}
int Account::getNbDeposits(void)
{
    return (_totalNbDeposits);
}
int Account::getNbWithdrawals(void)
{
    return (_totalNbWithdrawals);
}
void Account::displayAccountsInfos(void)
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << getNbAccounts();
    std::cout << ";total:" << getTotalAmount();
    std::cout << ";deposits:" << getNbDeposits();
    std::cout << ";withdrawals:" << getNbWithdrawals() << std::endl;
    return;
}

Account::Account(int initial_deposit)
{
    Account::_amount = 0;
    Account::_displayTimestamp();
    Account::_accountIndex = getNbAccounts();
    Account::_amount += initial_deposit;
    _totalAmount += initial_deposit;
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";created" << std::endl;
    _nbAccounts++;
    return;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << _amount;
    std::cout << ";closed" << std::endl;
    return;
}

void Account::makeDeposit(int deposit)
{
    _totalNbDeposits++;
    _totalAmount += deposit;
    _displayTimestamp();
    Account::_nbDeposits++;
    std::cout << "index:" << _accountIndex;
    std::cout << ";p_amount:" << Account::checkAmount();
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << Account::checkAmount() + deposit;
    std::cout << ";nb_deposits:" << Account::_nbDeposits << std::endl;
    Account::_amount += deposit;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if((Account::_amount - withdrawal) < 0)
    {
        std::cout << "index:" << _accountIndex;
        std::cout << ";p_amount:" << Account::checkAmount();
        std::cout << ";withdrawal:" << "refused" << std::endl;
        return(false);   
    }
    else
    {
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        Account::_nbWithdrawals++;
        Account::_amount -= withdrawal;
        std::cout << "index:" << _accountIndex;
        std::cout << ";p_amount:" << Account::checkAmount();
        std::cout << ";withdrawal:" << withdrawal;
        std::cout << ";amount:" << Account::checkAmount() + withdrawal;
        std::cout << ";nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
        return true;
    }
}

int Account::checkAmount(void) const
{
    return (Account::_amount);
}

void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex;
    std::cout << ";amount:" << Account::checkAmount();
    std::cout << ";deposits:" << Account::_nbDeposits;
    std::cout << ";withdrawals:" << Account::_nbWithdrawals << std::endl;
}

// private:

void Account::_displayTimestamp(void)
{
    time_t now = time(0);
    tm *ltm = localtime(&now);

    std::cout << "[" << 1900 + ltm->tm_year;
    std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday << "_";
    std::cout << std::setfill('0') << std::setw(2) << 5 + ltm->tm_hour;
    std::cout << std::setfill('0') << std::setw(2) << 30 + ltm->tm_min;
    std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec << "] ";
    return;
}
