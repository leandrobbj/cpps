/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/17 14:52:38 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 14:54:37 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

static bool strInput(std::string str, std::string& input);
static bool nbrInput(std::string str, int& N);

int main(void)
{
	int			N = 0;
	std::string	name;
	Zombie*		horde;

	if (!nbrInput("Horde size (int): ", N))
			return 0;
	if (!strInput("Horde name: ", name))
			return 0;
	horde = zombieHorde(N, name);
	std::cout << C_GREEN;
	for (int i = 0; i < N; i++)
		horde[i].announce();
	std::cout << C_RED;
	delete[] horde;
	std::cout << C_RESET;
	return 0;
}

static bool strInput(std::string str, std::string& input)
{
	std::cout << str;
	if (!std::getline(std::cin, input))
		return false;
	return true;
}

static bool nbrInput(std::string str, int& N)
{
	std::string	nbr;
	char*		end = NULL;

	while (true)
	{
		if (!strInput(str, nbr))
			return false;
		N = std::strtol(nbr.c_str(), &end, 10);
		if (*end != '\0' || N < 1)
		{
			std::cout << C_RED << "error: no natural numbers" << C_RESET << '\n';
			continue;
		}
		else if (N > 50)
			N = 50;
		return true;
	}
}
