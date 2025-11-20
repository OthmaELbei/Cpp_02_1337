/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 17:10:36 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/19 11:55:47 by oelbied          ###   ########.fr       */
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
  ~Fixed();
  Fixed(const Fixed &other);
  Fixed &operator=(const Fixed &other);

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;
};
std::ostream &operator<<(std::ostream &out, const Fixed &fi);

#endif