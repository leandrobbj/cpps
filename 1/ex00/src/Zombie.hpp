/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 13:42:34 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 13:51:35 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

# define C_RESET	"\033[0m"
# define C_GREEN	"\033[32m"
# define C_MAGENTA	"\033[35m"
# define C_CIAN		"\033[36m"

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie(std::string name);
		~Zombie();
		void announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
