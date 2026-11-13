/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 01:01:45 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/13 16:19:27 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>

# define TEST 0

class PhoneBook {
	private:;
		int		oldest;
		int		entries;
		Contact	contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		void printAll();
		void printContact();
		void printEntries();
		void fill();
};

#endif