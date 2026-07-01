/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:58:10 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/01 13:59:29 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook	Phone_Book;

	std::string	line;
	std::cout << "Entre une cmd : ADD, SEARCH, EXIT" << std::endl;
	while (std::getline(std::cin, line))
	{
		if (line == "EXIT")
			exit (1);
		if (line == "ADD")
			Phone_Book.add();
		std::cout << "Entre une cmd : ADD, SEARCH, EXIT" << std::endl;
	}
}
