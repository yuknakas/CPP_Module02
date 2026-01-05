/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:08:02 by yuknakas          #+#    #+#             */
/*   Updated: 2026/01/05 11:20:59 by yuknakas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

// ************************************************************************** //
//                                Fixed Class                                 //
// ************************************************************************** //

class Fixed
{
public:
	// default constructor
	Fixed( void );
	// copy constructor
	Fixed( const Fixed &other );
	// copy assignment operator
	Fixed &operator=( const Fixed &other );
	// destructor
	~Fixed();

	// getter
	int		getRawBits( void )const;
	// setter
	void	setRawBits( int const raw );

private:
	int					m_value;
	static const int	m_fracBits = 8;
};


#endif