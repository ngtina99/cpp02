/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 21:53:21 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/06 21:53:21 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main() {
    Point a(0, 0);
    Point b(10, 0);
    Point c(0, 10);

    Point inside(3, 3);
    Point outside(20, 20);
    Point edge(0, 0);

    std::cout << "Point inside: " << (bsp(a, b, c, inside) ? "Yes" : "No") << std::endl;
    std::cout << "Point outside: " << (bsp(a, b, c, outside) ? "Yes" : "No") << std::endl;
    std::cout << "Point on edge: " << (bsp(a, b, c, edge) ? "Yes" : "No") << std::endl;

    return 0;
}
