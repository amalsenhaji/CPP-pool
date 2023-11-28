/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 20:25:58 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:29:54 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <list>
#include <exception>

class Span
{
private:
    std::list<int>  _list;
    unsigned int    _n;

    Span( void );

public:
    Span( unsigned int );
    Span( const Span& );
    ~Span( void );

    Span&               operator=( const Span& );
    void                addNumber( int );
    void                addNumber( std::list<int>::const_iterator, std::list<int>::const_iterator );
    unsigned int        longestSpan( void ) const;
    unsigned int        shortestSpan( void ) const;

    const std::list< int >*   getList( void ) const;
};

std::ostream& operator<<( std::ostream&, const Span& );
