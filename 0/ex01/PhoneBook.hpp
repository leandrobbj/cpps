/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 01:01:45 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/23 15:34:32 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <cctype>
#include <iomanip>

remover exit, fazer trim e limitar espacos em branco

# ifndef TEST
#  define TEST 0
# endif

class PhoneBook
{
	private:
		int		oldest;
		int		entries;
		Contact	contacts[8];
		void	printAll();
		void	printContact();
	public:
		PhoneBook();
		~PhoneBook();
		void add();
		void search();
		void printEntries();
		void fill();
};

#endif
