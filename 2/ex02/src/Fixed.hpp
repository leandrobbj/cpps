/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 02:52:35 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/26 16:17:35 by lbraga           ###   ########.fr       */
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
		Fixed(const int val);
		Fixed(const float val);
		Fixed(const Fixed& copy);
		Fixed& operator=(const Fixed& copy);
		~Fixed();
		int		getRawBits() const;
		void	setRawBits(int const raw);
		int		toInt() const;
		float	toFloat() const;
		// Comparison Operators
		bool	operator>(Fixed const& ref) const;
		bool	operator<(Fixed const& ref) const;
		bool	operator>=(Fixed const& ref) const;
		bool	operator<=(Fixed const& ref) const;
		bool	operator==(Fixed const& ref) const;
		bool	operator!=(Fixed const& ref) const;
		// Arithmetic operators
		Fixed	operator+(Fixed const& other) const;
		Fixed	operator-(Fixed const& other) const;
		Fixed	operator*(Fixed const& other) const;
		Fixed	operator/(Fixed const& other) const;
};

std::ostream& operator<<(std::ostream& output, Fixed const& val);

#endif
