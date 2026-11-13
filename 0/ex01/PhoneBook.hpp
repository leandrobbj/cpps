/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 01:01:45 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/13 01:04:12 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <iomanip>

class PhoneBook {
	private:;
		int entries;
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		void printPhoneBook();
		void printContact();
		void printEntries();
		void fill();
};

#endif