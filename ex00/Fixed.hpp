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

class	Fixed
{

	public:

		Fixed();
		~Fixed();
		Fixed( Fixed const &src );
		Fixed	&operator=( Fixed const &rhs );

		int		getRawBits() const;
		void	setRawBits( int const raw );

	private:

	int					_value;
	static const int	_bits = 8;

};

#endif