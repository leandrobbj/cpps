/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 02:52:51 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/28 13:25:41 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

const int Fixed::_fract = 8;

Fixed::Fixed() : _bits(0) {}

Fixed::Fixed(const Fixed& copy): _bits(copy._bits) {}

Fixed::Fixed(const int val): _bits(val << _fract) {}

Fixed::Fixed(const float val) {
	_bits = static_cast<int>(roundf(val * (1 << _fract)));
}

Fixed& Fixed::operator=(const Fixed& copy) {
	if (this != &copy)
		_bits = copy.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

int Fixed::getRawBits() const {
	return (_bits);
}

void Fixed::setRawBits(int const raw) {
	_bits = raw;
}

int Fixed::toInt() const{
	return (_bits >> _fract);
}

float Fixed::toFloat() const {
	return (static_cast<float>(_bits) / static_cast<float>(1 << _fract));
}

// Comparison Operators

bool Fixed::operator>(Fixed const& f) const {
	return (_bits > f._bits);
}

bool Fixed::operator<(Fixed const& f) const {
	return (_bits < f._bits);
}

bool Fixed::operator>=(Fixed const& f) const {
	return (_bits >= f._bits);
}

bool Fixed::operator<=(Fixed const& f) const {
	return (_bits <= f._bits);
}

bool Fixed::operator==(Fixed const& f) const {
	return (_bits == f._bits);
}

bool Fixed::operator!=(Fixed const& f) const {
	return (_bits != f._bits);
}

// Arithmetic operators

Fixed Fixed::operator+(Fixed const& f) const {
	Fixed result;
	result._bits = _bits + f._bits;
	return (result);
}

Fixed Fixed::operator-(Fixed const& f) const {
	Fixed result;
	result._bits = _bits - f._bits;
	return (result);
}

Fixed Fixed::operator*(Fixed const& b) const {
	return (Fixed(this->toFloat() * b.toFloat()));
}

Fixed Fixed::operator/(Fixed const& b) const {
	if (b._bits != 0)
		return (Fixed(this->toFloat() / b.toFloat()));
	return (Fixed());
}

// Unary Operators

Fixed& Fixed::operator++() {
	_bits = _bits + 1;
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed tmp(*this);
	_bits = _bits + 1;
	return (tmp);
}

Fixed& Fixed::operator--() {
	_bits = _bits - 1;
	return (*this);
}

Fixed Fixed::operator--(int) {
	Fixed tmp(*this);
	_bits = _bits - 1;
	return (tmp);
}

// Comparison functions

Fixed& Fixed::min(Fixed& a, Fixed& b) {
	return (a < b ? a : b);
}

Fixed const& Fixed::min(Fixed const& a, Fixed const& b) {
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
	return (a > b ? a : b);
}

Fixed const& Fixed::max(Fixed const& a, Fixed const& b) {
	return (a > b ? a : b);
}

std::ostream& operator<<(std::ostream& output, Fixed const& val) {
	return (output << val.toFloat());
}
