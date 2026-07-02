/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:18:22 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/02 15:45:53 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

PhoneBook::PhoneBook() :index(0), max_i(0){
	return ;
}

PhoneBook::~PhoneBook() {
	return ;
}

std::string	ask_input(std::string input) {
	std::string	res;
	std::cout << "Enter your " << input << "\n";
	std::getline(std::cin, res);
	if (std::cin.eof())
		return ("");
	while (verif_input(res, input) == 0)
	{
		std::cout << "Wrong format for " << input << "\n";
		std::getline(std::cin, res);
		if (std::cin.eof())
			return ("");
	}
	return (res);
}

void	PhoneBook::display_contact(int i) {
	std::cout << contact[i].getfield("first name");
	std::cout << " | ";
	std::cout << contact[i].getfield("last name");
	std::cout << " | ";
	std::cout << contact[i].getfield("nick name");
	std::cout << " | ";
	std::cout << contact[i].getfield("phone number");
	std::cout << " | ";
	std::cout << contact[i].getfield("darkest secret");
	std::cout << "\n";
}

void	PhoneBook::display_all_contact() {
	for (int i(0); i < 8 && contact[i].getfield("first name") != ""; ++i)
	{
		std::cout << i;
		std::cout << " | ";
		std::cout << contact[i].getfield("first name");
		std::cout << " | ";
		std::cout << contact[i].getfield("last name");
		std::cout << " | ";
		std::cout << contact[i].getfield("nick name");
		std::cout << "\n";
	}
}

void	PhoneBook::add() {
	std::string	fields[5] = {
		"first name",
		"last name",
		"nick name",
		"phone number",
		"darkest secret"
	};
	std::string	input;
	index = index % 8;
	for (int i = 0; i < 5; i++) {
		input = ask_input(fields[i]);
		if (input.empty())
			return ;
		contact[index].SetInput(input, fields[i]);
	}
	index++;
	max_i = std::min(max_i + 1, 8);
	return ;
}

void	PhoneBook::search() {
	int	i(0);
	display_all_contact();
	if (!max_i)
	{
		std::cout << "There is no contact\n";
		return ;
	}
	else
		std::cout << "Choose your contact index between 0 and " << (max_i - 1) << "\n";
	std::cin >> i;
	while (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cin >> i;
	}
	std::cin.ignore(1000, '\n');
	if (i < max_i)
		display_contact(i);
}
