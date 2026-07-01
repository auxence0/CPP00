/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:57:20 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/01 16:32:47 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

void	Contact::SetInput(std::string input, std::string field) {
	if (field == "first name")
		firstName_ = input;
	else if (field == "last name")
		lastName_ = input;
	else if (field == "nick name")
		nickname_ = input;
	else if (field == "phone number")
		phoneNumber_ = input;
	else if (field == "dark secret")
		darkestSecret_ = input;
}
