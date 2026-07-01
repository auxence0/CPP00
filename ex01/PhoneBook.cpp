/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:18:22 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/01 15:17:33 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	std::cout << "Constructor called" << std::endl;
	return ;
}

PhoneBook::~PhoneBook() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

std::string	ask_input(std::string input) {
	std::string	res;
	std::cout << "Enter your " << input << std::endl;
	std::getline(std::cin, res);
	while (verif_input(res, input) == 0)
		std::cout << "Wrong format for " << input << std::endl;
	return (res);
}

void	PhoneBook::add() {
	std::string	input;
	input = ask_input("first name");
	contact[index].SetInput(input, "first name");
	ask_input("last name");
	contact[index].SetInput(input, "first name");
	ask_input("nick name");
	contact[index].SetInput(input, "nick name");
	ask_input("phone number");
	contact[index].SetInput(input, "phone number");
	ask_input("dark secret");
	contact[index].SetInput(input, "dark secret");
	index++;
	return ;
}
