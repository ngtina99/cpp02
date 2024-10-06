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

Fixed::Fixed() : _fixedValue(0) {
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const int integerInit ) : _fixedValue(integerInit << _fractBits){
	std::cout << "Int constructor called" << std::endl;
	return ;
}

Fixed::Fixed( const float floatInit) : _fixedValue((int)roundf(floatInit * (1 << _fractBits))) {
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
		_fixedValue = rhs._fixedValue;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedValue = raw;
	return ;
}

float	Fixed::toFloat( void ) const {
	return ((float)_fixedValue / (float)(1 << _fractBits));
}

int		Fixed::toInt( void ) const {
	return (_fixedValue >> _fractBits);
}


std::ostream	&operator<<(std::ostream &COUT, Fixed const &fixedValue)
{
	COUT << fixedValue.toFloat();
	return (COUT);
}
