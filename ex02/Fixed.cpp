/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:31:16 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/06 21:31:16 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int integerValue ) : _value(integerValue << _fractBits){
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float floatValue ) : _value((int)roundf(floatValue * (1 << _fractBits))) {
	std::cout << "Float constructor called" << std::endl;
	return ;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed( Fixed const &src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Fixed	&Fixed::operator=( Fixed const &rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	 if (this != &rhs)
		_value = rhs._value;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
	return ;
}

float	Fixed::toFloat( void ) const {
	return ((float)_value / (float)(1 << _fractBits));
}

int		Fixed::toInt( void ) const {
	return (_value >> _fractBits);
}

std::ostream	&operator<<(std::ostream &COUT, Fixed const &fixedValue)
{
	COUT << fixedValue.toFloat();
	return (COUT);
}

bool	Fixed::operator>( Fixed const &src ) const {
	return (this->toFloat() > src.toFloat());
}
bool	Fixed::operator<( Fixed const &src ) const {
	return (this->toFloat() < src.toFloat());
}

bool	Fixed::operator>=( Fixed const &src ) const {
	return (this->toFloat() >= src.toFloat());
}

bool	Fixed::operator<=( Fixed const &src ) const {
	return (this->toFloat() <= src.toFloat());
}

bool	Fixed::operator==( Fixed const &src ) const {
	return (this->toFloat() == src.toFloat());
}


bool	Fixed::operator!=( Fixed const &src ) const {
	return (this->toFloat() != src.toFloat());
}


Fixed	Fixed::operator+(Fixed const &src ) const {
	return (this->toFloat() + src.toFloat());
}

Fixed	Fixed::operator-(Fixed const &src ) const {

}

Fixed	Fixed::operator*(Fixed const &src ) const {

}

Fixed	Fixed::operator/(Fixed const &src ) const {

}

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