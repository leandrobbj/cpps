/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:42:34 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/19 21:06:42 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cstdlib>

# define C_RESET	"\033[0m"
# define C_RED		"\033[31m"
# define C_GREEN	"\033[32m"

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void setName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
