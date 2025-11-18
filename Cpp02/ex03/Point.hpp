/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:04:34 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/17 15:03:18 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include <cmath>
#include <iostream>
#include <cmath>
#include "Fixed.hpp"

class Point
{
private:
    Fixed const x;
    Fixed const y;

public:
    Point();
    Point(float dx, float fy) ;
    Point(Point const &other);
    Point &operator=(const Point &other);
    float getx() const;
    float gety() const;
};
bool bsp(Point const a, Point const b, Point const c, Point const point);
#endif