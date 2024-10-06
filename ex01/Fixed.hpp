/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 20:45:49 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/06 20:45:49 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{

	public:

		Fixed();
		Fixed( const int integerInit );
		Fixed( const float floatInit );
		~Fixed();
		Fixed( Fixed const &src );
		Fixed	&operator=( Fixed const &rhs );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

	private:

	int					_fixedValue;
	static const int	_fractBits = 8;

};

std::ostream & operator<<(std::ostream &os, const Fixed &src);

#endif