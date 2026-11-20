/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StreamEditor.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/20 05:23:37 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/20 07:13:01 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StreamEditor.hpp"

StreamEditor::StreamEditor(char* name, char* s1, char* s2)
	: _name(name), _s1(s1), _s2(s2) {}

bool StreamEditor::setupStreams()
{
	if (_s1.empty())
		return printError("error: <s1> can't be empty");
	
	_istream.open(_name.c_str());
	if (!_istream.is_open())
		return printError("error: can't read file");

	std::string outname = _name + ".replace";
	_ostream.open(outname.c_str());
	if (!_ostream.is_open())
		return printError("error: can't write file");
	
	return true;
}

void StreamEditor::replaceString()
{
	std::ostringstream	buffer;
	buffer << _istream.rdbuf();
	std::string content = buffer.str();

	size_t	pos = 0;
	size_t	len1 = _s1.length();
	size_t	len2 = _s2.length();

	while ((pos = content.find(_s1, pos)) != std::string::npos)
	{
		content.erase(pos, len1);
		content.insert(pos, _s2);
		pos += len2;
	}
	_ostream << content;
}

bool printError(std::string str)
{
	std::cerr << C_RED << str << C_RESET << std::endl;
	return false;
}
