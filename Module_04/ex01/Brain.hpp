/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/24 21:11:40 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 18:28:28 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
private:
    std::string _ideas[100];

public:
    Brain( void );
    ~Brain( void );
    Brain( const Brain& src );
    Brain& operator=( const Brain& rhs );
};
 
#endif // BRAIN_HPP