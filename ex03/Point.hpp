/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:10:37 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/09 01:10:37 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class Point {
	
	public:

		Point ();
		Point ( float const pointX, float const pointY );
		Point ( Point const &src );
		Point	&operator=( Point const &rhs);
		~Point();
		static bool	bsp( Point const a, Point const b, Point const c, Point const point);

	private:

		Fixed const _valueX;
		Fixed const _valueY;
	
};

std::ostream &operator<<(std::ostream &COUT, const Point &src);

#endif
