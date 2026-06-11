/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:18:51 by asauvage          #+#    #+#             */
/*   Updated: 2026/05/27 16:26:16 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class PhoneBook{
	private:
		Contact contact[8];
	public:
		void add();
		void search();
		void exit();

		PhoneBook();
};

class Contact{
	private:
		std::string	firstName_;
		std::string lastName_;
		std::string nickname_;
		std::string phoneNumber_;
		std::string darkestSecret_;
	
	public:
		Contact(const std::string& fName, std::string lName, std::string nName, std::string phone, std::string secret);
};

#endif