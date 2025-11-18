/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:27:51 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/17 14:42:10 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(const Fixed &other)
{
    valio = other.valio;
}
Fixed::Fixed(const float value)
{
    valio = roundf(value * (1 << fixd));
}
float Fixed::toFloat(void) const
{
    return (float)valio / (1 << fixd);
}
Fixed &Fixed::operator=(const Fixed &other)
{

    if (this != &other)
    {
        valio = other.valio;
    }
    return *this;
}