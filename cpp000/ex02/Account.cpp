#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
int Account::_nbAccounts = 0;

Account ::Account(int initial_deposit)
{
    _amount = initial_deposit;
    _accountIndex = _nbAccounts;
    _totalAmount = _totalAmount + initial_deposit;

    _displayTimestamp();
    std::cout   << "index " << _accountIndex 
                << "; amount: " << _amount 
                << "; created"
                << std::endl;
    _nbAccounts++;
}

Account ::~Account(void)
{
    _displayTimestamp();
    std::cout   << "index " << _accountIndex 
                << "; amount: " << _amount 
                << "; closed"
                << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos(void)
{
    _displayTimestamp();
    std::cout   << "Accounts: " << _nbAccounts 
                << "; total: "<< _totalAmount 
                << "; deposits: " << _totalNbDeposits 
                << "; withdrawals: " << _totalNbWithdrawals 
                << std::endl;
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout   << "index " << _accountIndex 
                << "; amount: " << _amount 
                << "; deposits: " << _nbDeposits 
                << "; withdrawals: " << _nbWithdrawals 
                << std::endl;
}

void Account :: makeDeposit(int deposit)
{
    _displayTimestamp();
    _amount = _amount + deposit;
    _nbDeposits++;
    _totalAmount = _totalAmount + deposit;
    _totalNbDeposits++;
    std::cout   << "index " << _accountIndex 
                << "; p_amount: " << _amount - deposit
                << "; deposit: " << deposit
                << "; amount: " << _amount
                << "; nb_deposits: " << _nbDeposits
                << std::endl;
}

bool Account :: makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    if (_amount < withdrawal)
    {
        std::cout   << "index " << _accountIndex
                    << "; p_amount: " << _amount
                    << "; withdrawal:refused" << std::endl;
        return false;
    }
    _amount = _amount - withdrawal;
    _nbWithdrawals++;
    _totalAmount = _totalAmount - withdrawal;
    _totalNbDeposits++;
    std::cout   << "index " << _accountIndex 
                << "; p_amount: " << _amount + withdrawal
                << "; withdrawal: " << withdrawal
                << "; amount: " << _amount
                << "; nb_Withdrawal: " << _nbWithdrawals
                << std::endl;
    return true;
}

void Account :: _displayTimestamp( void )
{
    std::cout << "[19920104_091532] ";
}