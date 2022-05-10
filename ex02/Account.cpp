#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts() {
	return Account::_nbAccounts;
}

int Account::getTotalAmount() {
	return Account::_totalAmount;
}

int Account::getNbDeposits() {
	return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals() {
	return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:"    << _nbAccounts         << ";"
	          << "total:"       << _totalAmount        << ";"
			  << "deposits:"    << _totalNbDeposits    << ";"
			  << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::_displayTimestamp() {
	std::time_t t = std::time(nullptr);
    std::tm* now = std::localtime(&t);
    std::cout << std::setfill('0')
              << "[" << now->tm_year + 1900
              << std::setw(2) << now->tm_mon + 1
              << std::setw(2) << now->tm_mday
              << "_"
              << std::setw(2) << now->tm_hour
              << std::setw(2) << now->tm_min
              << std::setw(2) << now->tm_sec
              << "] ";
}

Account::Account(int initial_deposit): _accountIndex(Account::_nbAccounts++), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {
    Account::_totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:"  << _accountIndex << ";"
              << "amount:" << _amount       << ";"
              << "created" << std::endl;
}

Account::Account(): _accountIndex(Account::_nbAccounts++), _amount(0), _nbDeposits(0), _nbWithdrawals(0) {
	_displayTimestamp();
	std::cout << "index:"  << _accountIndex << ";"
              << "amount:" << _amount       << ";"
              << "created" << std::endl;
}

Account::~Account() {
    _displayTimestamp();
    std::cout << "index:"  << _accountIndex << ";"
              << "amount:" << _amount       << ";"
              << "closed"  << std::endl;
	_nbAccounts--;
	Account::_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
}

void Account::makeDeposit(int deposit) {
    Account::_totalNbDeposits++;
    _nbDeposits++;
    Account::_totalAmount += deposit;
    _displayTimestamp();
    std::cout << "index:"       << _accountIndex     << ";"
              << "p_amount:"    << _amount           << ";"
              << "deposit:"     << deposit           << ";"
              << "amount:"      << _amount + deposit << ";"
              << "nb_deposits:" << _nbDeposits       << std::endl;
    _amount += deposit;
}

void Account::displayStatus() const {
    _displayTimestamp();
	std::cout << "index:"       << _accountIndex  << ";"
	          << "amount:"      << _amount        << ";"
              << "deposits:"    << _nbDeposits    << ";"
              << "withdrawals:" << _nbWithdrawals << std::endl;
}

bool Account::makeWithdrawal(int withdrawal) {
    _displayTimestamp();
    std::cout << "index:"    << _accountIndex << ";"
              << "p_amount:" << _amount       << ";"
              << "withdrawal:";
    if (withdrawal > _amount) {
        std::cout << "refused" << std::endl;
        return false;
    }
    std::cout << withdrawal << ";";
    _amount -= withdrawal;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    _nbWithdrawals++;
    std::cout << "amount:"         << _amount        << ";"
              << "nb_withdrawals:" << _nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount() const {
	return _amount;
}
