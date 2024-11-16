#include "Account.hpp"

#include <ctime>


Account::Account( int initial_deposit )
{
    _displayTimestamp();
    std::cout << " index:" << _nbAccounts << ";amount:" << initial_deposit << ";created" << std::endl;
    this->_amount = initial_deposit;
    this->_accountIndex = _nbAccounts;
    _nbAccounts++;
    _totalAmount += initial_deposit;
}
Account::~Account( void )
{
    _displayTimestamp();
     std::cout << " index:" << this->_accountIndex << ";amount:" <<  this->_amount << ";closed" << std::endl;

}

int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_nbAccounts = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
    time_t timestamp;
    struct tm datetime;
    char arr[50];

    std::time(&timestamp);
    datetime = *localtime(&timestamp);
    std::strftime(arr, 50, "[%Y%m%d_%H%M%S]",&datetime); 
    std::cout << arr; 
}

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
    _displayTimestamp();
    std::cout << " accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() <<";withdrawals:" << getNbWithdrawals() << std::endl;

}



void	Account::makeDeposit( int deposit )
{
    int p_amount;

    _displayTimestamp();
    p_amount = this->_amount;
    this->_amount +=deposit;
    _totalNbDeposits++;
    _totalAmount += deposit;
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount
              << ";deposit:"<< deposit << ";amount:" << this->_amount << ";nb_deposits:" << ++this->_nbDeposits<< std::endl;
}
bool	Account::makeWithdrawal( int withdrawal )
{
     int p_amount;
    
    p_amount = this->_amount;
    _displayTimestamp();
    if (withdrawal > this->_amount)
    {
        std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount   << ";withdrawal:refused" << std::endl;
        return false;
    }
    this->_amount -=withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    std::cout << " index:" << this->_accountIndex << ";p_amount:" << p_amount
              << ";withdrawal:"<< withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << ++this->_nbWithdrawals<< std::endl;
    return true;
}
int		Account::checkAmount( void ) const
{
    return this->_amount;
}
void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:"<< this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}
