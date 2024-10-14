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
	return (this->toFloat() - src.toFloat());
}

Fixed	Fixed::operator*(Fixed const &src ) const {
	return (this->toFloat() * src.toFloat());
}

Fixed	Fixed::operator/(Fixed const &src ) const {
	return (this->toFloat() / src.toFloat());
}

		// pre-increment Operators
Fixed	&Fixed::operator++( void ) {
	++this->_value;
	return (*this);
}

Fixed	&Fixed::operator--( void ) {
	--this->_value;
	return (*this);
}
//++(++obj);  // Modifies 'obj' twice, since both increments are applied to the original object

		// post-increment Operators
Fixed	Fixed::operator++( int ) {
	Fixed temp = *this;
	++this->_value;
	return (temp);
}

Fixed	Fixed::operator--( int ) {
	Fixed temp = *this;
	--this->_value;
	return (temp);
}

Fixed	&Fixed::min(Fixed &nbr1, Fixed &nbr2) {
	if (nbr1.toFloat() <= nbr2.toFloat())
		return (nbr1);
	else
		return (nbr2);
}

const Fixed	&Fixed::min(Fixed const &nbr1, Fixed const &nbr2) {
	if (nbr1.toFloat() >= nbr2.toFloat())
		return (nbr1);
	else
		return (nbr2);
}

Fixed	&Fixed::max(Fixed &nbr1, Fixed &nbr2) {
	if (nbr1.toFloat() >= nbr2.toFloat())
		return (nbr1);
	else
		return (nbr2);
}

const Fixed	&Fixed::max(Fixed const &nbr1, const Fixed &nbr2) {
	if (nbr1.toFloat() >= nbr2.toFloat())
		return (nbr1);
	else
		return (nbr2);
}
