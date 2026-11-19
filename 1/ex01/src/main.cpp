/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:52:38 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/19 13:11:19 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static std::string strInput(std::string str);

int main(void)
{
	int			N = 0;
	char*		end = NULL;
	std::string	nbr;
	std::string	name;
	Zombie*		horde;

	while (true)
	{
		nbr = strInput("Horde size (int): ");
		N = std::strtol(nbr.c_str(), &end, 10);
		if (*end != '\0' || N < 1)
		{
			std::cout << C_RED << "error: no natural numbers" << C_RESET << std::endl;
			continue;
		}
		else if (N > 50)
			N = 50;
		break;
	}
	name = strInput("Horde name: ");
	horde = zombieHorde(N, name);
	std::cout << C_GREEN << std::endl;
	for (int i = 0; i < N; i++)
		horde[i].announce();
	std::cout << C_RED << std::endl;
	delete[] horde;
	std::cout << C_RESET << std::endl;
	return 0;
}

static std::string strInput(std::string str)
{
	std::string input = "";
	std::cout << str;
	if (!std::getline(std::cin, input))
		exit (0);
	return input;
}
