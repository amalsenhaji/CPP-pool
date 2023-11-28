/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 03:41:41 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:29:44 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template < typename T >
void    iter( T *arr, size_t size, void (*f)(T &) )
{
    for ( size_t i = 0; i < size; i++ )
        f( arr[i] );
}

template < typename T >
void    print( T &i )
{
    std::cout << i << std::endl;
}