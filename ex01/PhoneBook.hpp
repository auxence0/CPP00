/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/29 15:54:08 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/01 16:34:32 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PhoneBook_HPP
# define PhoneBook_HPP

# include "Contact.hpp"
# include "cstdlib"

class PhoneBook{
	public:
		PhoneBook();
		~PhoneBook();
		void	add();
		void	search();
		void	display(Contact contact);
	private:
		Contact contact[8];
		int		index;
};

int	verif_input(std::string res, std::string input);

#endif