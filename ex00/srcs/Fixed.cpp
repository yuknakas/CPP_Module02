/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:13:14 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/05 11:22:29 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed( void ): m_value(0)
{
	std::cout << "Default Constructor Called" << std::endl;
}

Fixed::Fixed( const Fixed &other): m_value(other.m_value)
{
	std::cout << "Copy Constructor Called" << std::endl;
}

Fixed	&Fixed::operator=( const Fixed &other )
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		this->m_value = other.m_value;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Default Destructor Called" << std::endl;
}

int	Fixed::getRawBits( void )const
{
	return (this->m_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->m_value = raw;
}
