/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:28:19 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/17 14:08:19 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
#include <iostream>
#include <cmath>

class Fixed
{
private:
    int valio;
    static const int fixd = 8;

public:
    Fixed(const float value);
    Fixed &operator=(const Fixed &other);
    Fixed(const Fixed &other);
    float toFloat(void) const;
};

#endif