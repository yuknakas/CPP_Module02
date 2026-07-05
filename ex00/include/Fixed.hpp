/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:08:02 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/05 15:49:36 by yuknakas         ###   ########.fr       */
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

#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define RESET "\033[0m"

#endif
