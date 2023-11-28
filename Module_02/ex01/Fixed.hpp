/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:58:30 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:27:37 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int                 _fixedPointValue;
    static const int    _fractionalBits = 8;

public:
    Fixed( void );
    Fixed( const int n );
    Fixed( const float n );
    Fixed( const Fixed &rhs );
    Fixed& operator=( const Fixed &rhs );
    ~Fixed();

    int     getRawBits( void ) const;
    void    setRawBits( int const raw );

    float   toFloat( void ) const;
    int     toInt( void ) const;

};

std::ostream & operator<<( std::ostream & o, Fixed const & i );


#endif  // FIXED_HPP