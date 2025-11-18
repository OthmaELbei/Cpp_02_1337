/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:01:16 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/17 08:40:07 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed &Fixed::operator=(const Fixed &other)
{
  if (this != &other)
  {
    this->fix_point = other.fix_point;
  }
  std::cout << "Copy assignment operator called" << std::endl;
  return *this;
}

Fixed::~Fixed()
{
  std::cout << "Destructor called" << std::endl;
}
Fixed::Fixed()
{
  std::cout << "Default constructor called" << std::endl;
  fix_point = 0;
}

Fixed::Fixed(const Fixed &other)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = other;
  other.getRawBits();
}
int Fixed::getRawBits(void) const
{
  std::cout << "getRawBits member function called" << std::endl;
  return fix_point;
}
void Fixed::setRawBits(int const raw)
{
  std::cout << "copy assignment operator called" << std::endl;
  fix_point = raw;
}