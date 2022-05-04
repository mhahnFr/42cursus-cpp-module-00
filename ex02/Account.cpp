#include <iostream>
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
			  << "withdrawals:" << _totalNbWithdrawals << ";"
			  << std::endl;
}

void Account::_displayTimestamp() {
	std::cout << "[20220504_182500] ";
}

Account::Account(int initial_deposit): _amount(initial_deposit) {
	Account();
}

Account::Account(): _accountIndex(Account::_nbAccounts++), _nbDeposits(0), _nbWithdrawals(0) {
	_displayTimestamp();
	displayStatus();
	std::cout << "created" << std::endl;
}

Account::~Account() {
	_displayTimestamp();
	displayStatus();
	std::cout << "closed" << std::endl;
	_nbAccounts--;
	_totalAmount -= _amount;
	_totalNbDeposits -= _nbDeposits;
	_totalNbWithdrawals -= _nbWithdrawals;
}

void Account::makeDeposit(int deposit) {
	// TODO
}

void Account::displayStatus() const {
	std::cout << "index:"  << _accountIndex << ";"
	          << "amount:" << _amount       << ";";
}

bool Account::makeWithdrawal(int withdrawal) {
	// TODO
}

int Account::checkAmount() const {
	return _amount;
}
