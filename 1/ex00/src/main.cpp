/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:52:38 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 14:53:54 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static bool strInput(std::string str, std::string& input);

int main(void)
{
	std::string zombie[4];
	std::string string[4] = {
		"Name newZombie1: ",
		"Name newZombie2: ",
		"Name randomChump1: ",
		"Name randomChump2: ",
	};
	for (int i = 0; i < 4; i++)
		if (!strInput(string[i], zombie[i]))
			return 0;
	
	Zombie* zombie1 = newZombie(zombie[0]);
	Zombie* zombie2 = newZombie(zombie[1]);
	std::cout << C_MAGENTA;
	randomChump(zombie[2]);
	std::cout << C_GREEN;
	randomChump(zombie[3]);
	std::cout << C_CIAN;
	delete zombie1;
	std::cout << C_RESET;
	delete zombie2;
	return 0;
}

static bool strInput(std::string str, std::string& input)
{
	std::cout << str;
	if (!std::getline(std::cin, input))
		return false;
	return true;
}
