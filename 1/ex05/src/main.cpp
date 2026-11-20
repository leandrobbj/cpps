/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 11:40:44 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 12:41:56 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

static bool strInput(std::string str, std::string& input);

int	main(void)
{
	std::cout << "\033[2J\033[3J\033[H";
	std::string level;
	Harl harl;
	
	std::cout << "\n——————————————————————————————————————\n";
	std::cout << "  ———————————  Harl 2.0  ———————————  \n";
	std::cout << "——————————————————————————————————————\n";
	while(true)
	{
		if (!strInput("\nDEBUG | INFO | WARNING | ERROR | EXIT \n", level)
			|| level == "EXIT")
			break;
		else
			harl.complain(level);
	}
	return 0;
}

static bool strInput(std::string str, std::string& input)
{
	std::cout << str;
	if (!std::getline(std::cin, input))
		return false;
	return true;
}