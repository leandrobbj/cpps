/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:05:35 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/06 19:22:46 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char **av)
{
	unsigned char	c;
	
	if (ac > 1)
		for (int i = 1; av[i]; i++)
			for (int j = 0; av[i][j]; j++)
			{
				c = static_cast<unsigned char>(av[i][j]);
				std::cout << static_cast<char>(std::toupper(c));
			}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << '\n';
	return (0);
}

/* 
iostream	para usar cout
std::cout	imprime no standard output
std::toupper comportamento indefinido se negativo
cctype		para usar toupper
static_cast	para converter tipos
*/
