/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 11:40:44 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/28 13:32:27 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#define C_RESET		"\033[0m"
#define C_RED		"\033[31m"
#define C_GREEN		"\033[32m"
#define C_MAGENTA	"\033[35m"
#define C_CIAN		"\033[36m"

#include <iostream>

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << C_CIAN;
	std::cout << a << std::endl;
	std::cout << C_GREEN;
	std::cout << ++a << std::endl;
	std::cout << C_MAGENTA;
	std::cout << a << std::endl;
	std::cout << C_RED;
	std::cout << a++ << std::endl;
	std::cout << C_CIAN;
	std::cout << a << std::endl;
	std::cout << C_GREEN;
	std::cout << b << std::endl;
	std::cout << C_MAGENTA;
	std::cout << Fixed::max( a, b ) << std::endl;

	return 0;
}
