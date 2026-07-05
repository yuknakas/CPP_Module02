/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuknakas <yuknakas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 11:08:02 by yuknakas          #+#    #+#             */
/*   Updated: 2026/07/05 15:58:07 by yuknakas         ###   ########.fr       */
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

std::ostream &operator<<(std::ostream &os, const Fixed &fixed);

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define YELLOW "\033[33m"
#define BLUE "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN "\033[36m"

#endif
