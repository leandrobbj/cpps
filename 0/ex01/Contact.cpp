/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 01:01:30 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/13 02:39:57 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Contact.hpp"

Contact::Contact(){
}

Contact::~Contact(){
}

void Contact::create(std::string info[5]){
	this->first = info[0];
	this->last = info[1];
	this->nick = info[2];
	this->number = info[3];
	this->secret = info[4];
	std::cout << "Contact created!\n";
}

std::string Contact::getInfo(char c){
	if (c == 'f')
		return (this->first);
	if (c == 'l')
		return (this->last);
	if (c == 'n')
		return (this->nick);
	if (c == '0')
		return (this->number);
	if (c == 's')
		return (this->secret);
	return NULL;
}
