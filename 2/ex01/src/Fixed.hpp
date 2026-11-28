/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbraga <lbraga@student.42lisboa.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/26 02:52:35 by lbraga            #+#    #+#             */
/*   Updated: 2026/11/28 13:09:31 by lbraga           ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& output, Fixed const& val);

#endif
