/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:13:14 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/05 16:02:23 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed( void ): m_value(0)
{
	std::cout << YELLOW << "Default Constructor Called" << RESET << std::endl;
}

Fixed::Fixed( const int i_param )
{
	std::cout << CYAN << "Int Constructor Called" << RESET << std::endl;
	this->m_value = i_param << this->m_fracBits;
}

Fixed::Fixed( const float f_param )
{
	std::cout << GREEN << "Float Constructor Called" << RESET << std::endl;
	this->m_value = roundf(f_param * (1 << this->m_fracBits));
}

Fixed::Fixed( const Fixed &other)
{
	std::cout << BLUE << "Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

Fixed	&Fixed::operator=( const Fixed &other )
{
	std::cout << MAGENTA << "Copy assignment operator called" << MAGENTA << std::endl;
	if (this != &other)
		this->m_value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << RED << "Destructor Called" << RESET << std::endl;
}

int	Fixed::getRawBits( void )const
{
	return (this->m_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->m_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)this->m_value / (float)(1 << this->m_fracBits));
}

int	Fixed::toInt( void ) const
{
	return (this->m_value >> m_fracBits);
}

// https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}
