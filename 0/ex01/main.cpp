/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 22:16:38 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/19 13:10:26 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::cout << "\033[2J\033[3J\033[H";
	PhoneBook phoneBook;
	std::string cmd;
	
	std::cout << "\n——————————————————————\n";
	std::cout << " My Awesome PhoneBook \n";
	std::cout << "——————————————————————\n";
	if (TEST)
		phoneBook.fill();
	while(true)
	{
		std::cout << "\nADD | SEARCH | EXIT\n>";
		if (!std::getline(std::cin, cmd))
			break;
		if (cmd == "ADD")
			phoneBook.add();
		else if (cmd == "SEARCH")
			phoneBook.search();
		else if (cmd == "EXIT")
			break;
		else if (TEST && cmd == "ENT")
			phoneBook.printEntries();
		else
			std::cout << "\033[3A\r\033[0J" << std::flush;
	}
	return 0;
}
