/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/06 22:16:38 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/13 15:32:38 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int	main(void)
{
	std::cout << "\033[2J\033[3J\033[H";
	PhoneBook phoneBook;
	std::string cmd;
	
	std::cout << "\n——————————————————————\n";
	std::cout << " My Awesome PhoneBook \n";
	std::cout << "——————————————————————\n";
	if (TEST)
		phoneBook.fill();
	while(true)
	{
		std::cout << "\nADD | SEARCH | EXIT\n>";
		if (!std::getline(std::cin, cmd))
			break;
		if (cmd == "ADD")
			phoneBook.add();
		else if (cmd == "SEARCH")
			phoneBook.search();
		else if (cmd == "EXIT")
			break;
		else if (TEST && cmd == "ENT")
			phoneBook.printEntries();
		else
			std::cout << "\033[3A\r\033[0J" << std::flush;
	}
	return 0;
}

/* 
iostream	cout, cin, getline
cstdlib		exit
iomanip		setw
cctype		isspace
::			acessa uma funcao static
.			acessa a funcao de um objeto
this->		especifica que eu quero alterar desta classe
std:		biblioteca standard
:cin		processa a partir da entrada padrao
:getline	retorna string
:setw		set width
:endl	garantir que o texto apareça na hora
:flush	garante a saida do comando

*Caracteres de Controle
\033		caractere ESC
\033[0J		Apaga para baixo
\033[1J		Apaga para cima
\033[2J		Apaga area visivel
\033[3J		Apaga histórico
\033[H		Move o cursor para inicio
\033[1A		Sobe o cursor 1 linha (↑A ↓B ←C →D)
\r			Move o cursor para a primeira coluna
*/