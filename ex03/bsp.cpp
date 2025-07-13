/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thuy-ngu <thuy-ngu@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 01:18:32 by thuy-ngu          #+#    #+#             */
/*   Updated: 2024/10/09 01:18:32 by thuy-ngu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static float area(Point const &p1, Point const &p2, Point const &p3) {
    return std::abs(
        (p1.getX().toFloat() * (p2.getY().toFloat() - p3.getY().toFloat()) +
         p2.getX().toFloat() * (p3.getY().toFloat() - p1.getY().toFloat()) +
         p3.getX().toFloat() * (p1.getY().toFloat() - p2.getY().toFloat())) / 2.0f
    );
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    float totalArea = area(a, b, c);
    float area1 = area(point, b, c);
    float area2 = area(a, point, c);
    float area3 = area(a, b, point);

    if (area1 == 0 || area2 == 0 || area3 == 0)
        return false;  // on edge or vertex

    return (area1 + area2 + area3) == totalArea;
}
