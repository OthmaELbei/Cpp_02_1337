/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:18:53 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/19 13:04:00 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>
class Fixed
{
private:
  int fix_point;
  static const int fixd = 8;

public:
  Fixed();
  Fixed(const float value);
  Fixed(const int value);
  Fixed operator++(int);
  Fixed &operator++();
  Fixed operator--(int);
  Fixed &operator--();
  Fixed operator*(const Fixed &other) const;
  bool operator > (const Fixed &other) const;
  bool operator < (const Fixed &other) const;
  bool operator >= (const Fixed &other) const;
  bool operator <= (const Fixed &other) const;
  bool operator == (const Fixed &other) const;
  bool operator != (const Fixed &other) const;
  Fixed operator-(const Fixed &other) const;
  Fixed operator/(const Fixed &other) const;
  Fixed operator+(const Fixed &other) const;
  float toFloat(void) const;
  int toInt(void) const;
  static const Fixed &max(const Fixed &a, const Fixed &b);
  static const Fixed &min(const Fixed &a, const Fixed &b);
  static  Fixed &max( Fixed &a,Fixed &b);
  static  Fixed &min( Fixed &a,  Fixed &b);
};
std::ostream &operator<<(std::ostream &out, const Fixed &fi);
#endif
