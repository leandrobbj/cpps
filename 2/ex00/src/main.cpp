/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 11:40:44 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/26 14:18:19 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

#define C_RESET		"\033[0m"
#define C_GREEN		"\033[32m"
#define C_MAGENTA	"\033[35m"
#define C_CIAN		"\033[36m"

int	main(void)
{
	std::cout << C_CIAN;
	Fixed a;
	std::cout << C_GREEN;
	Fixed b( a );
	std::cout << C_MAGENTA;
	Fixed c;
	std::cout << C_RESET;
	c = b;	
	std::cout << C_CIAN;
	std::cout << a.getRawBits() << std::endl;
	std::cout << C_GREEN;
	std::cout << b.getRawBits() << std::endl;
	std::cout << C_MAGENTA;
	std::cout << c.getRawBits() << std::endl;
	std::cout << C_RESET;
	return 0;
}
