/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:08:02 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/06 17:03:25 by yuknakas         ###   ########.fr       */
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
	Fixed &operator=( const Fixed &other );

	// getter
	int		getRawBits( void )const;
	// setter
	void	setRawBits( int const raw );

	// member funcs
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:
	int					m_value;
	static const int	m_fracBits = 8;
};


#endif