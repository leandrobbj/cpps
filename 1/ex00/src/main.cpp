/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:52:38 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/19 13:08:39 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static std::string strInput(std::string str);

int main()
{
	Zombie* zombie1 = newZombie(strInput("Name newZombie1: "));
	std::cout << C_GREEN << std::endl;
	Zombie* zombie2 = newZombie(strInput("Name newZombie2: "));
	std::cout << C_CIAN << std::endl;
	randomChump(strInput("Name randomChump1: "));
	std::cout << C_MAGENTA << std::endl;
	randomChump(strInput("Name randomChump2: "));
	std::cout << C_RESET << std::endl;
	delete zombie1;
	std::cout << C_GREEN << std::endl;
	delete zombie2;
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
