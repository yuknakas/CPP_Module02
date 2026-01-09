/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:08:02 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/09 16:18:54 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

// ************************************************************************** //
//                                Fixed Class                                 //
// ************************************************************************** //

class Fixed
{
public:
	// constructor
	Fixed( void );
	Fixed( const int i_param );
	Fixed( const float f_param );
	Fixed( const Fixed &other );
	// destructor
	~Fixed();
	
	// copy assignment operator
	Fixed	&operator=( const Fixed &other );

	// getter
	int		getRawBits( void )const;
	// setter
	void	setRawBits( int const raw );

	// member funcs
	float	toFloat( void ) const;
	int		toInt( void ) const;

	// comparsion operators
	bool	operator>( const Fixed &x ) const;
	bool	operator<( const Fixed &x ) const;
	bool	operator>=( const Fixed &x ) const;
	bool	operator<=( const Fixed &x ) const;
	bool	operator==( const Fixed &x ) const;
	bool	operator!=( const Fixed &x ) const;

	// arithmetic operator
	Fixed	operator+( const Fixed &x );
	Fixed	operator-( const Fixed &x );
	Fixed	operator*( const Fixed &x );
	Fixed	operator/( const Fixed &x );

	// increment/decrement operators
	Fixed	&operator++( void );
	Fixed	operator++( int );
	Fixed	&operator--( void );
	Fixed	operator--( int );

	// min/max
	static Fixed		&min( Fixed &x, Fixed &y );
	static const Fixed	&min( const Fixed &x, const Fixed &y );
	static Fixed		&max( Fixed &x, Fixed &y );
	static const Fixed	&max( const Fixed &x, const Fixed &y );

private:
	int					m_value;
	static const int	m_fracBits = 8;
};

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#endif