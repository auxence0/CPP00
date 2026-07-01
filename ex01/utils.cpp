/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/01 14:26:15 by asauvage          #+#    #+#             */
/*   Updated: 2026/07/01 16:37:30 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	verif_input(std::string res, std::string input) {
	int i = 0;
	if (res.empty())
		return (0);
	while (res[i])
	{
		if (input != "phone number")
		{
			if (res[i] < 32 || res[i] > 126)
				return (0);
		}
		else
		{
			if (res[i] < '0' || res[i] > '9')
				return (0);
		}		
		i++;
	}
	return (1);
}

