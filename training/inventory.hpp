/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inventory.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/16 10:33:56 by asauvage          #+#    #+#             */
/*   Updated: 2026/06/16 10:54:54 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INVENTORY_HPP
# define INVENTORY_HPP

#include <iostream>
#include <string>
#include <iomanip>

class	item{
	public:
		item();
		~item();
	private:
		std::string nom;
		std::string categorie;
		std::string quantite;
		std::string etat;
};

class	inventory{
	public:
		void get_item(item item);
		void fill_item();
		inventory();
		~inventory();
	private:
		item items[5];
		int	index;
};

#endif