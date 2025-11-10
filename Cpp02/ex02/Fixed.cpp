/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:15:01 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/09 17:23:02 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int Fixed::toInt(void) const
{
  return fix_point >> fixd;
}
float Fixed::toFloat(void) const
{
  return (float)fix_point / (1 << fixd);
}
std::ostream &operator<<(std::ostream &out, const Fixed &fi)
{
  out << fi.toFloat();
  return out;
}
Fixed::Fixed(const int value)
{
  std::cout << "int constructor called" << std::endl;
  fix_point = value << fixd;
}
const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
  if (a.toFloat() > b.toFloat())
    return a;
  return b;
}
Fixed::Fixed(const float value)
{
  std::cout << "int constructor called" << std::endl;
  fix_point = roundf(value * (1 << fixd));
}
Fixed::Fixed()
{
    fix_point = 0;
}


Fixed Fixed::operator*(const Fixed &other) const
{
  Fixed result;
  result.fix_point = ((long long)this->fix_point * other.fix_point) >> fixd;
  return result;
}

bool Fixed::operator > (const Fixed &other) const
{
 
  return (this->fix_point > other.fix_point);
 
}bool Fixed::operator < (const Fixed &other) const
{
 
  return (this->fix_point < other.fix_point);
 
}bool Fixed::operator >= (const Fixed &other) const
{
 
  return (this->fix_point >= other.fix_point);
 
}
bool Fixed::operator <= (const Fixed &other) const
{
 
  return (this->fix_point <= other.fix_point);
 
}

bool Fixed::operator == (const Fixed &other) const
{
 
  return (this->fix_point == other.fix_point);
 
}

bool Fixed::operator != (const Fixed &other) const
{
 
  return (this->fix_point != other.fix_point);
 
}

Fixed Fixed::operator+(const Fixed &other) const
{
  Fixed result;
  result.fix_point = (this->fix_point + other.fix_point) >> fixd;
  return result;
}
Fixed Fixed::operator-(const Fixed &other) const
{
  Fixed result;
  result.fix_point = (this->fix_point - other.fix_point) >> fixd;
  return result;
}
Fixed Fixed::operator/(const Fixed &other) const
{
  Fixed result;
  result.fix_point = ((long long)this->fix_point << fixd )/ other.fix_point;
  return result;
}

Fixed &Fixed ::operator++()
{
  fix_point++;
  return *this;
}
Fixed Fixed ::operator++(int)
{
  Fixed t = *this;
  fix_point++;
  return t;
}
Fixed &Fixed ::operator--()
{
  fix_point--;
  return *this;
}
Fixed Fixed ::operator--(int)
{
  Fixed t = *this;
  fix_point--;
  return t;
}