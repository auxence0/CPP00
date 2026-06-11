/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asauvage <asauvage@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 15:08:04 by asauvage          #+#    #+#             */
/*   Updated: 2026/06/11 13:15:40 by asauvage         ###   ########.fr       */
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
			j = 0;
			while (av[i][j])
				std::cout << char(toupper(av[i][j++]));
		}
		std::cout << '\n';
	}
}
