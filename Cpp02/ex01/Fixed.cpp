/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:10:12 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/17 11:05:40 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

  Fixed::Fixed(const int value)
  {
     std::cout<< "Int constructor called" << std::endl;
     fix_point = value << fixd;
    
  } 
  Fixed::Fixed(const float value)
  {
     std::cout<< "Float constructor called" << std::endl;
     fix_point = roundf(value * (1 << fixd));
  }
 float Fixed::toFloat( void ) const
 {
        return (float)fix_point / (1 << fixd);
 }
 int Fixed::toInt( void ) const
 {
     return (fix_point >> fixd);
 }
 Fixed& Fixed::operator = (const Fixed &other)
 {
  std::cout<< "Copy assignment operator called" << std::endl;
    if(this != &other)
    {
      this->fix_point= other.fix_point;
    }
    return *this;
}

 Fixed::~Fixed()
{
    std::cout<< "Destructor called" << std::endl;
}

Fixed::Fixed()
{
    std::cout<< "Default constructor called" << std::endl;
    fix_point = 0;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout<< "Copy constructor called" << std::endl;
    *this = other;
}

  std::ostream &operator << (std::ostream &out, const Fixed &fi)
{
    out << fi.toFloat();
    return out;
}

