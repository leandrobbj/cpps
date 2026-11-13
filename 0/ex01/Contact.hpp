/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 01:01:45 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/13 03:18:43 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>
#include <iostream>

class Contact {
	private:
		std::string first;
		std::string last;
		std::string nick;
		std::string number;
		std::string secret;
	public:
		Contact();
		~Contact();
		void create(std::string info[5]);
		std::string getInfo(char c);
};

#endif

