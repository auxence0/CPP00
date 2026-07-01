/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:58:10 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/01 19:22:10 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	Phone_Book;

	std::string	line;
	std::cout << "Entre une cmd : ADD, SEARCH, EXIT" << "\n";
	while (std::getline(std::cin, line))
	{
		if (line == "EXIT")
			return (1);
		else if (line == "ADD")
			Phone_Book.add();
		else if (line == "SEARCH")
			Phone_Book.search();
		std::cout << "Entre une cmd : ADD, SEARCH, EXIT" << "\n";
	}
	if (std::cin.eof())
		return (1);
}
