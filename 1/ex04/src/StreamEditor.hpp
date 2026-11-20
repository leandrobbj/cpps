/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamEditor.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 05:23:34 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 07:11:33 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STREAMEDITOR_HPP
# define STREAMEDITOR_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

# define C_RESET	"\033[0m"
# define C_RED		"\033[31m"

class StreamEditor
{
	private:
		std::string		_name;
		std::string		_s1;
		std::string		_s2;
		std::ifstream	_istream;
		std::ofstream	_ostream;
	public:
		StreamEditor(char* name, char* s1, char* s2);
		bool setupStreams();
		void replaceString();
};

bool printError(std::string str);

#endif
