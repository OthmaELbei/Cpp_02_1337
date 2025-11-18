/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:04:23 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/17 14:50:50 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) 
{}

Point::Point(float dx, float fy) : x(dx), y(fy)
{}

Point::Point(Point const &other) : x(other.x), y(other.y)
{}

Point &Point::operator=(const Point &other)
{
    (void)other;
    return *this;
}

float Point::getx() const
{
    return x.toFloat();
}

float Point::gety() const
{
    return y.toFloat();
}