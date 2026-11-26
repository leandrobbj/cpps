/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 11:40:44 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/26 15:24:32 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

#define C_RESET		"\033[0m"
#define C_RED		"\033[31m"
#define C_GREEN		"\033[32m"
#define C_MAGENTA	"\033[35m"
#define C_CIAN		"\033[36m"

int main(void)
{
	std::cout << C_CIAN;
	Fixed a;
	std::cout << C_GREEN;
	Fixed const b( 10 );
	std::cout << C_MAGENTA;
	Fixed const c( 42.42f );
	std::cout << C_RED;
	Fixed const d( b );

	std::cout << C_RESET;
	a = Fixed( 1234.4321f );
	
	std::cout << C_CIAN;
	std::cout << "a is " << a << std::endl;
	std::cout << C_GREEN;
	std::cout << "b is " << b << std::endl;
	std::cout << C_MAGENTA;
	std::cout << "c is " << c << std::endl;
	std::cout << C_RED;
	std::cout << "d is " << d << std::endl;
	
	std::cout << C_CIAN;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << C_GREEN;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << C_MAGENTA;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << C_RED;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	std::cout << C_RESET;
	return 0;
}
