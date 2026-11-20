/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:11:12 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 16:34:27 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

# define C_RESET	"\033[0m"
# define C_GREEN	"\033[32m"
# define C_MAGENTA	"\033[35m"
# define C_CIAN		"\033[36m"

int main(void)
{
	std::string		string = "HI THIS IS BRAIN";
	std::string*	stringPTR = &string;
	std::string&	stringREF = string;

	std::cout << C_CIAN << &string << "<- string adress" << '\n';
	std::cout << C_GREEN << stringPTR << "<- address held by stringPTR" << '\n';
	std::cout << C_MAGENTA << &stringREF << "<- address held by stringREF" << "\n\n";
	
	std::cout << C_CIAN << string << "<- string value" << '\n';
	std::cout << C_GREEN << *stringPTR << "<- value pointed by stringPTR" << '\n';
	std::cout << C_MAGENTA << stringREF << "<- value referenced by stringREF" << '\n';
	std::cout << C_RESET;
	return 0;
}
