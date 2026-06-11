/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:18:22 by asauvage          #+#    #+#             */
/*   Updated: 2026/05/27 16:27:16 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void PhoneBook::exit() {}

int main(void)
{
	PhoneBook	Phone_Book;
	int		index_contact;
	std::string	line;
	std::cout << "Entre une cmd : ADD, SEARCH, EXIT";
	while (std::getline(std::cin, line))
	{
		if (line == "EXIT")
			Phone_Book.exit();
	}
}