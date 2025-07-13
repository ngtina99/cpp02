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
    //std::cout << "Point Default constructor called" << std::endl;
}

Point::Point(float const pointX, float const pointY) : _valueX(pointX), _valueY(pointY) {
    //std::cout << "Point Float constructor called" << std::endl;
}

Point::Point(Point const &src) : _valueX(src._valueX), _valueY(src._valueY) {
    //std::cout << "Point Copy constructor called" << std::endl;
}

Point::~Point() {
    //std::cout << "Point Destructor called" << std::endl;
}

Fixed Point::getX() const {
    return _valueX;
}

Fixed Point::getY() const {
    return _valueY;
}

std::ostream &operator<<(std::ostream &out, const Point &src) {
    out << "(" << src.getX() << ", " << src.getY() << ")";
    return out;
}
