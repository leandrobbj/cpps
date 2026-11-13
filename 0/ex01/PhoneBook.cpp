/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 01:01:30 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/13 03:36:57 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(): entries(0), contacts(){
	std::cout << "<PhoneBook constructor>\n";
}

PhoneBook::~PhoneBook(){
	std::cout << "\n<PhoneBook destructor>\n";
}

static std::string strInput(std::string str);
static std::string strFit(std::string str);

void PhoneBook::add() {
	std::string info[5];
	info[0] = strInput("\nFirst Name: ");
	info[1] = strInput("Last Name: ");
	info[2] = strInput("Nick Name: ");
	info[3] = strInput("Number: ");
	info[4] = strInput("Dark Secret: ");
	int i = entries % 8;
	contacts[i].create(info);
	entries++;
}

void PhoneBook::search()
{
	if (entries == 0)
	{
		std::cout << "error: phonebook empty\n";
		return;
	}
	printPhoneBook();
	printContact();
}

void PhoneBook::printPhoneBook() {
	int	i = 0;
	int	total = entries;
	if (entries > 8)
		total = 8;
	std::cout << "                                  PhoneBook\n";
	std::cout << "———————————————————————————————————————————\n";
	std::cout << "     index| firstname|  lastname|  nickname\n";
	std::cout << "-------------------------------------------\n";
	while (i < total)
	{
		std::cout << std::setw(10) << i + 1  << '|';
		std::cout << std::setw(10) << strFit(contacts[i].getInfo('f')) << '|';
		std::cout << std::setw(10) << strFit(contacts[i].getInfo('l')) << '|';
		std::cout << std::setw(10) << strFit(contacts[i].getInfo('n')) << '\n';
		i++;
	}
	std::cout << "———————————————————————————————————————————\n";
}

void PhoneBook::printContact() {
	std::string	input;
	while (true)
	{
		input = strInput("Index (1-8): ");
		if (input[1] || !(input[0] >= '0' && input[0] <='8'))
			std::cout << "error: incorrect input\n";
		else if (input[0] == '0')
			return;
		else if (input[0] -'0' > entries)
			std::cout << "error: index empty\n";
		else
			break;
	}
	int i = input[0] -'0' - 1;
	std::cout << "\nFirst Name: " << contacts[i].getInfo('f') << '\n';
	std::cout << "Last Name: " << contacts[i].getInfo('l') << '\n';
	std::cout << "Nick Name: " << contacts[i].getInfo('n') << '\n';
	std::cout << "Number: " << contacts[i].getInfo('0') << '\n';
	std::cout << "Dark Secret: " << contacts[i].getInfo('s') << '\n';
}

void PhoneBook::printEntries(){
	std::cout << "\nEntries: " << entries << "\n";
}

void PhoneBook::fill() {
	std::string info[5];
	info[0] = "Ana";
	info[1] = "Silva";
	info[2] = "Aninha";
	info[3] = "123456";
	info[4] = "Segredo 0";
	contacts[0].create(info);
	info[0] = "Bartholomeu"; // Mais de 10 caracteres
	info[1] = "Oliveira";
	info[2] = "Barth";
	info[3] = "987654";
	info[4] = "Segredo 1";
	contacts[1].create(info);
	info[0] = "AidenSmith"; // 10 caracteres certinhos
	info[1] = "Costa";
	info[2] = "Aid";
	info[3] = "112233";
	info[4] = "Segredo 2";
	contacts[2].create(info);
	info[0] = "Carlos";
	info[1] = "Albuquerque"; // Sobrenome longo (> 10 chars)
	info[2] = "Carlinhos";
	info[3] = "445566";
	info[4] = "Segredo 3";
	contacts[3].create(info);
	info[0] = "Diana";
	info[1] = "Princesa";
	info[2] = "Di";
	info[3] = "778899";
	info[4] = "Segredo 4";
	contacts[4].create(info);
	info[0] = "Eduardo";
	info[1] = "Lima";
	info[2] = "Dudu";
	info[3] = "000111";
	info[4] = "Segredo 5";
	contacts[5].create(info);
	info[0] = "Fernanda";
	info[1] = "Souza";
	info[2] = "Nanda";
	info[3] = "222333";
	info[4] = "Segredo 6";
	contacts[6].create(info);
	info[0] = "Gabriel";
	info[1] = "Monteiro";
	info[2] = "Biel";
	info[3] = "444555";
	info[4] = "Segredo 7";
	contacts[7].create(info);
	entries = 8;
}

static std::string strInput(std::string str)
{
	std::string input = "";
	while (true)
	{
		std::cout << str;
		if (!std::getline(std::cin, input))
			exit (0);
		for (int i = 0; input[i]; i++)
			if (!std::isspace(input[i]))
				return input;
		std::cout << "\033[1A\r\033[0J" << std::flush;
	}
}

static std::string strFit(std::string str) {
	if (str.size() > 10)
		return str.substr(0, 9) + '.';
	return str;
}