/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 13:57:20 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/02 16:00:26 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	return ;
}

Contact::~Contact() {
	return ;
}

std::string	Contact::getfield(std::string field) const {
	if (field == "first name")
		return (firstName_);
	else if (field == "last name")
		return (lastName_);
	else if (field == "nick name")
		return (nickname_);
	else if (field == "phone number")
		return (phoneNumber_);
	else if (field == "darkest secret")
		return (darkestestSecret_);
	return ("");
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
	else if (field == "darkest secret")
		darkestestSecret_ = input;
}
