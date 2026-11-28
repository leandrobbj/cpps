/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 02:52:35 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/28 13:09:50 by lbraga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_bits;
		static const int	_fract;
	public:
		Fixed();
		Fixed(const Fixed& copy);
		Fixed(const int val);
		Fixed(const float val);
		Fixed& operator=(const Fixed& copy);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;
		// Comparison Operators
		bool	operator>(Fixed const& f) const;
		bool	operator<(Fixed const& f) const;
		bool	operator>=(Fixed const& f) const;
		bool	operator<=(Fixed const& f) const;
		bool	operator==(Fixed const& f) const;
		bool	operator!=(Fixed const& f) const;
		// Arithmetic operators
		Fixed	operator+(Fixed const& f) const;
		Fixed	operator-(Fixed const& f) const;
		Fixed	operator*(Fixed const& f) const;
		Fixed	operator/(Fixed const& f) const;
		// Unary Operators
		Fixed&	operator++();
		Fixed	operator++(int);
		Fixed&	operator--();
		Fixed	operator--(int);
		// Comparison functions
		static Fixed&		min(Fixed& a, Fixed& b);
		static Fixed const&	min(Fixed const& a, Fixed const& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static Fixed const&	max(Fixed const& a, Fixed const& b);
};

std::ostream& operator<<(std::ostream& output, Fixed const& val);

#endif
