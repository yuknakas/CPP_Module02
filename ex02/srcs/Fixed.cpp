/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:13:14 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/05 16:07:12 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed( void )
: m_value(0)
{
	// std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed( const int i_param )
:m_value(i_param << this->m_fracBits)
{
	// std::cout << "Int Constructor Called" << std::endl;
}

Fixed::Fixed( const float f_param )
:m_value(roundf(f_param * (1 << this->m_fracBits)))
{
	// std::cout << "Float Constructor Called" << std::endl;
}

Fixed::Fixed( const Fixed &other)
{
	// std::cout << "Copy Constructor Called" << std::endl;
	*this = other;
}

Fixed	&Fixed::operator=( const Fixed &other )
{
	// std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->m_value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	// std::cout << "Destructor Called" << std::endl;
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

std::ostream &operator<<(std::ostream &os, const Fixed &fixed)
{
	os << fixed.toFloat();
	return (os);
}

// comparsion operators
bool	Fixed::operator>( const Fixed &x ) const
{
	return (this->toFloat() > x.toFloat());
}

bool	Fixed::operator<( const Fixed &x ) const
{
	return (this->toFloat() < x.toFloat());
}

bool	Fixed::operator>=( const Fixed &x ) const
{
	return (this->toFloat() >= x.toFloat());
}

bool	Fixed::operator<=( const Fixed &x ) const
{
	return (this->toFloat() <= x.toFloat());
}

bool	Fixed::operator==( const Fixed &x ) const
{
	return (this->toFloat() == x.toFloat());
}

bool	Fixed::operator!=( const Fixed &x ) const
{
	return (!(*this == x));
}

// arithmetic operator
Fixed	Fixed::operator+( const Fixed &x )
{
	return (Fixed(this->toFloat() + x.toFloat()));
}

Fixed	Fixed::operator-( const Fixed &x )
{
	return (Fixed(this->toFloat() - x.toFloat()));
}

Fixed	Fixed::operator*( const Fixed &x )
{
	return (Fixed(this->toFloat() * x.toFloat()));
}

Fixed	Fixed::operator/( const Fixed &x )
{
	return (Fixed(this->toFloat() / x.toFloat()));
}

// increment/decrement operators
Fixed	&Fixed::operator++( void )
{
	this->m_value++;
	return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	tmp = *this;
	
	this->m_value++;
	return (tmp);
}

Fixed	&Fixed::operator--( void )
{
	this->m_value--;
	return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	tmp = *this;

	this->m_value--;
	return (tmp);
}

// min/max
Fixed	&Fixed::min( Fixed &x, Fixed &y )
{
	if (x <= y)
		return (x);
	return (y);
}

const Fixed	&Fixed::min( const Fixed &x, const Fixed &y )
{
	if (x <= y)
		return (x);
	return (y);
}

Fixed	&Fixed::max( Fixed &x, Fixed &y )
{
	if (x >= y)
		return (x);
	return (y);
}

const Fixed	&Fixed::max( const Fixed &x, const Fixed &y )
{
	if (x >= y)
		return (x);
	return (y);
}
