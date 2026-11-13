/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/07 01:01:30 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/13 15:46:00 by lbraga           ###   ########.fr       */
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
}

std::string Contact::getFirst(){
	return this->first;
}

std::string Contact::getLast(){
	return this->last;
}

std::string Contact::getNick(){
	return this->nick;
}

std::string Contact::getNumber(){
	return this->number;
}

std::string Contact::getSecret(){
	return this->secret;
}
