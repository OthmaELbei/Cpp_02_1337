/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:51:19 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/12 10:30:17 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

  int main(void)
  {
      Fixed a;
      Fixed b(a);
      Fixed c;
      c = b;
      std::cout << a.getRawBits() << std::endl;
      std::cout << b.getRawBits() << std::endl;
      std::cout << c.getRawBits() << std::endl;
      return 0;
  }