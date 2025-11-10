/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:01:31 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/09 17:05:32 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP


#include <iostream>

class Fixed
{
private:
   int fix_point ;
   static const int fixd = 8;
public:
    Fixed();
    Fixed(const Fixed &other);
    Fixed& operator = (const Fixed &other);
  int  getRawBits( void ) const;
  void setRawBits( int const raw );
    ~Fixed();
};

#endif
