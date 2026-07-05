/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 12:43:16 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/03 14:51:42 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"

Account::Account (int inital_deposit) {
	
}

Account::~Account () {
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
	
}