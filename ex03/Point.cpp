/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:09:31 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/09 01:09:31 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : _valueX(0), _valueY(0) {
	std::cout << "Point Default constructor called" << std::endl;
	return ;
}

Point::Point( float const pointX, float const pointY ) : _valueX(pointX), _valueY(pointY) {
	std::cout << "Point Float constructor called" << std::endl;
	return ;
}

Point::Point( Point const &src ) {
	std::cout << "Point Copy constructor called" << std::endl;
	*this = src;
	return ;
}

Point	&Point::operator=( Point const &rhs ) {
	std::cout << "Point Copy assignment operator called" << std::endl;
	 if (this != &rhs)
		this->_valueX = rhs._valueX;
		this->_valueY = rhs._valueY;
	return (*this);
}

Point::~Point() {
	std::cout << "Point Destructor called" << std::endl;
	return ;
}
