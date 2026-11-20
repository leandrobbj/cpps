/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 14:11:12 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 04:57:19 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

# define C_RESET	"\033[0m"
# define C_RED		"\033[31m"

static int print_error(std::string str)
{
	std::cerr << C_RED << str << C_RESET << std::endl;
	return 1;
}

std::string new_line(std::string line, std::string s1, std::string s2)
{
	size_t pos = 0;
	size_t len = s1.length();

	while(line.find(s1) != std::string::npos)
	{
		pos = line.find(s1);
		line.erase(pos, len);
		line.insert(pos, s2);
		pos += s2.length();
	}
	return line;
}

int main(int ac, char **av)
{
	if (ac != 4)
		return print_error("error: expected <executable> <filename> <s1> <s2>");
	
	std::string s1 = av[2];
	if (s1.empty())
		return print_error("error: <s1> can't be empty");
	
	std::ifstream infile(av[1]);
	if (!infile.is_open())
		return print_error("error: can't read file");

	std::string		filename = av[1];
	std::string		outname = filename + ".replace";
	std::ofstream	outfile(outname.c_str());
	if (!outfile.is_open())
		return print_error("error: can't write file");
	
	std::string s2 = av[3];
	std::string line;
	while(std::getline(infile, line))
		outfile << new_line(line, s1, s2) << '\n';
	return 0;
}

