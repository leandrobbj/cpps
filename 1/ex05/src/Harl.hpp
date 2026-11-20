/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 11:40:51 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 15:11:46 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>

class Harl
{
	private:
		std::string _levels[4];
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		Harl();
		void complain(std::string& level);
};

#endif
