/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hozkaya <hozkaya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:36:10 by hozkaya           #+#    #+#             */
/*   Updated: 2024/08/25 13:36:11 by hozkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->num = 0;
    std::cout << "Default constructor called" << std::endl;
}
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
    std::cout<<"Copy assignment operator called"<<std::endl;
    this->num = fixed.getRawBits();
    return (*this);
}
int	Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
	return num;
}

void	Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
	num = raw;
}