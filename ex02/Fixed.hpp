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
		Fixed( const int integerValue );
		Fixed( const float floatValue );
		~Fixed();
		Fixed( Fixed const &src );
		Fixed	&operator=( Fixed const &rhs );

		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;

		bool	operator>( Fixed const &src ) const;
		bool	operator<( Fixed const &src ) const;
		bool	operator>=( Fixed const &src ) const;
		bool	operator<=( Fixed const &src ) const;
		bool	operator==( Fixed const &src ) const;
		bool	operator!=( Fixed const &src ) const;

		Fixed	operator+(Fixed const &src ) const;
		Fixed	operator-(Fixed const &src ) const;
		Fixed	operator*(Fixed const &src ) const;
		Fixed	operator/(Fixed const &src ) const;

		// pre-increment Operators
		Fixed	&operator++( void );
		Fixed	&operator--( void );
		// post-increment Operators
		Fixed	operator++( int );
		Fixed	operator--( int );

		static	Fixed &min(Fixed &first, Fixed &second);
		static const Fixed &min(Fixed const &first, Fixed const &second);
		static Fixed &max(Fixed &first, Fixed &second);
		static const Fixed &max(Fixed const &first, const Fixed &second);


	private:

	int					_value;
	static const int	_fractBits = 8;

};

std::ostream & operator<<(std::ostream &os, const Fixed &src);

#endif