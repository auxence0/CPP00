/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:43:16 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/05 17:11:20 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
int	Account::_totalAmount = 0;

Account::Account (int inital_deposit) {
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	std::cout << "index:" << _accountIndex << ";amount:" << inital_deposit << ";created\n";
	_nbAccounts++;
	_amount = inital_deposit;
	_totalAmount += inital_deposit;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::Account () {
	_displayTimestamp();
	_accountIndex = _nbAccounts;
	_amount = 0;
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
	_nbAccounts++;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
}

Account::~Account () {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
	return ;
}

int	Account::getNbAccounts () {
	return (_nbAccounts);
}

int	Account::getTotalAmount () {
	return (_totalAmount);
}

int	Account::getNbDeposits () {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals () {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void	Account::makeDeposit ( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";p_amount:" << _amount;
	_amount += deposit;
	_nbDeposits += 1;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	std::cout << ";deposit:" << deposit << ";amount:" << _amount << ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal ( int withdrawal ) {
	_displayTimestamp();
	if ( _amount >= withdrawal ) {
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal;
		_amount -= withdrawal;
		_nbWithdrawals += 1;
		_totalNbWithdrawals += 1;
		_totalAmount -= withdrawal;
		std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << "\n";
		return ( true );
	}
	else {
		std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
		return ( false );
	}
}

int	Account::checkAmount ( void ) const {
	return ( _amount );
}

void	Account::displayStatus ( void ) const {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << "\n";
}


void	Account::_displayTimestamp ( void ) {
	std::time_t	time;
	std::time(&time);
	std::tm*	time_now = std::localtime(&time);
	char	str[19];
	std::strftime(str, sizeof(str), "[%Y%m%d_%H%M%S] ", time_now);
	std::cout << str;
}