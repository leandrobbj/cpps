/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 02:52:51 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/26 16:35:29 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fract = 8;

Fixed::Fixed() : _bits(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int val): _bits(val << _fract) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float val) {
	std::cout << "Float constructor called" << std::endl;
	_bits = static_cast<int>(roundf(val * (1 << _fract)));
}

Fixed::Fixed(const Fixed& copy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed& Fixed::operator=(const Fixed& copy) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
		_bits = copy.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	return _bits;
}

void Fixed::setRawBits(int const raw) {
	_bits = raw;
}

int Fixed::toInt() const{
	return _bits >> _fract;
}

float Fixed::toFloat() const {
	return static_cast<float>(_bits) / static_cast<float>(1 << _fract);
}

// Comparison Operators

bool Fixed::operator>(Fixed const& ref) const {
	if (_bits > ref._bits)
		return (true);
	return (false);
}

bool Fixed::operator<(Fixed const& ref) const {
	if (_bits < ref._bits)
		return (true);
	return (false);
}

bool Fixed::operator>=(Fixed const& ref) const {
	if (_bits >= ref._bits)
		return (true);
	return (false);
}

bool Fixed::operator<=(Fixed const& ref) const {
	if (_bits <= ref._bits)
		return (true);
	return (false);
}

bool Fixed::operator==(Fixed const& ref) const {
	if (this->_bits == ref._bits)
		return (true);
	return (false);
}

bool Fixed::operator!=(Fixed const& ref) const {
	if (this->_bits != ref._bits)
		return (true);
	return (false);
}


// Arithmetic operators


Fixed Fixed::operator+(Fixed const& term) const {
	Fixed res(*this);
	res._bits += term._bits;
	return (res);
}

Fixed Fixed::operator-(Fixed const& term) const {
	Fixed res(*this);
	res._bits -= term._bits;
	return (res);
}

Fixed Fixed::operator*(Fixed const& term) const {
	Fixed res(*this);
	res._bits *= term._bits;
	return (res);
}



Fixed	Fixed::operator*(Fixed const & b) const
{
	Fixed	result(*this);

	result.fpValue = (static_cast<int64_t>(result.fpValue) *  b.fpValue) / (1 << this->bits);
	return (result);
}

Fixed	Fixed::operator/(Fixed const & b) const
{
	Fixed	result(*this);

	result.fpValue = (static_cast<int64_t>(result.fpValue) * (1 << this->bits)) /  b.fpValue;
	return (result);
}













std::ostream& operator<<(std::ostream& output, Fixed const& val) {
	return output << val.toFloat();
}