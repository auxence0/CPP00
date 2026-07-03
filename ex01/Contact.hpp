/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:18:51 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/03 13:47:51 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <cstring>
# include <iomanip>

class Contact{
	private:
		std::string	firstName_;
		std::string lastName_;
		std::string nickname_;
		std::string phoneNumber_;
		std::string darkestestSecret_;
	public:
		Contact();
		~Contact();
		void SetInput(std::string input, std::string field);
		std::string	getfield(std::string field) const ;
};

#endif