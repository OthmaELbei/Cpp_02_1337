/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/17 14:51:44 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/17 14:55:26 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

float calule(Point const &a, Point const &b, Point const &c)
{
    return fabs(a.getx() * (b.gety() - c.gety()) + b.getx() * (c.gety() - a.gety()) + c.getx() * (a.gety() - b.gety())) / 2.0;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
    const float EPS = 0.0001;
    float S = calule(a, b, c);
    float S1 = calule(b, c, point);
    float S2 = calule(a, c, point);
    float S3 = calule(b, a, point);
    if(fabs(S1 + S2 + S3 - S) < EPS && (S != S1 && S != S2 && S != S3))
    {
        return true;
    }else
    return false;

}