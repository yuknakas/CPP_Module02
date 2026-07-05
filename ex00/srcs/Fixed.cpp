/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:13:14 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/05 15:50:55 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

Fixed::Fixed( void ): m_value(0)
{
	std::cout << YELLOW << "Default Constructor Called" << RESET << std::endl;
}

Fixed::Fixed( const Fixed &other )
{
	std::cout << GREEN << "Copy Constructor Called" << RESET << std::endl;
	*this = other;
}

Fixed	&Fixed::operator=( const Fixed &other )
{
	std::cout << BLUE << "Copy assignment operator called" << RESET << std::endl;
	if (this != &other)
		this->m_value = other.getRawBits();
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << RED << "Default Destructor Called" << RESET << std::endl;
}

int	Fixed::getRawBits( void )const
{
	std::cout << "getRawBits memebr function called" << std::endl;
	return (this->m_value);
}

void	Fixed::setRawBits( int const raw )
{
	this->m_value = raw;
}
