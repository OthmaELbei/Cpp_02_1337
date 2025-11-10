/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oelbied <oelbied@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 10:51:56 by oelbied           #+#    #+#             */
/*   Updated: 2025/11/08 16:51:04 by oelbied          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    Fixed(const Fixed &other)
    {
        valio = other.valio;
    }
    float toFloat(void) const;
};
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

class Point
{
private:
    Fixed const x;
    Fixed const y;

public:
    Point() : x(0), y(0) {}
    Point(float dx, float fy) : x(dx), y(fy) {}
    Point(Point const &other) : x(other.x), y(other.y)
    {
    }
    Point &operator=(const Fixed &other)
    {

        (void)other;
        return *this;
    }
    float getx() const
    {
        return x.toFloat();
    }
    float gety() const
    {
        return y.toFloat();
    }
};
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
int main()
{
    Point a(0, 0);
    Point b(4, 0);
    Point c(2, 3);
    Point poin(1, 1);

    std::cout << bsp(a, b, c, poin) << std::endl;

}

// class Fixed
// {
// private:
//     int x;
//     int y;
//     static const int fixd = 8;

// public:
//     Fixed(float x, float y);
//     Fixed(const float value);
//     float getx()
//     {
//         return x / (1 << fixd);
//     }
//     float gety()
//     {
//         return y / (1 << fixd);
//     }
//     float calule(Fixed b, Fixed c)
//     {
//         int x1 = getx(); 
//         int y1 = gety();
//         int x2 = b.getx();
//         int y2 = b.gety();
//         int x3 = c.getx();
//         int y3 = c.gety();

//         return fabs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
//     }
// };
// Fixed::Fixed(float xx,float xy)
// {
//         x = roundf(xx * (1 << fixd));
//      y = roundf(xy * (1 << fixd));
// }

// int main()
// {
//     Fixed a(5, 5);
//     Fixed b(10, 20);
//     Fixed c(20, 10);
//     Fixed poin(10,19);
//     const float EPS = 0.0001;
//     float S = a.calule(b, c);
//     float S1 = poin.calule(b, c);
//     float S2 = poin.calule(a, c);
//     float S3 = poin.calule(b, a);

//     if (fabs(S1 + S2 + S3 - S) < EPS && (S != S1 && S !=S2 && S != S3))
//         std::cout << "this is in" << std::endl;
//     else
//         std::cout << "this is out" << std::endl;

//     std::cout << S << std::endl;
//     std::cout << S1 << std::endl;
//     std::cout << S2 << std::endl;
//     std::cout << S3 << std::endl;
// }