/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:08:04 by asauvage          #+#    #+#             */
/*   Updated: 2026/08/03 13:23:59 by asauvage         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
	else
	{
		int i = 0;
		int j = 0;
		while (av[++i])
		{
			std::string	str = av[i];
			j = 0;
			while (str[j])
				std::cout << char(toupper(str[j++]));
		}
		std::cout << '\n';
	}
}
